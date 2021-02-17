# RTAM1104 - TP 2

Analyse de trames, encapsulation dans un LAN

## I - Analyse de mon PC

### A - Caractéristiques du PC

Comme on peut le voir sur la capture de la commande Neofetch et du panneau de configuration, l'ordinateur est équipé d'une puce Apple Sillicon, de 8 Gb de RAM et d'un SSD de 512 Go.

![](https://i.ibb.co/M6pZQrW/Capture-d-cran-2021-02-10-13-51-12.png)
![](https://i.ibb.co/bmxqQ9R/Capture-d-cran-2021-02-10-13-52-41.png)

### B - Configuration Réseau

On récupère les informations grâce à l'utilitaire réseau de MacOS :

![](https://i.ibb.co/5j8tfwJ/Capture-d-cran-2021-02-10-13-35-51.png)

Les informations importantes pour configurer le réseau sont l'adresse IP (statique ou via DHCP), le masque de sous-réseau, l'adresse du routeur qui nous sert de passerelle. De plus, afin d'accéder aux sites web, une configuration des serveurs DNS est aussi nécessaire :

![](https://i.ibb.co/J28LQfh/Capture-d-cran-2021-02-10-13-42-29.png)

Comme on peut le voir les serveurs DNS configurés ici sont ceux de CloudFlare (1.1.1.1) & Google (8.8.4.4).

### Que fait ifconfig ?

La commande ifconfig permet de voir les différentes cartes réseaux ainsi que leurs configuration.

Ci-dessous un extrait de la commande ifconfig sur l'interface qui est connectée au réseau dans la question B : 

![](https://i.ibb.co/jgtRV7j/Capture-d-cran-2021-02-10-13-46-25.png)

### Que fait l'option /all ?

Sur windows, quand on passe /all comme argument à la fonction ipconfig, la commande affiche en plus les informations sur le DNS, le DHCP ainsi que les adresses MAC des cartes réseaux.

### Quelles sont les interfaces réseaux actives ?

L'interface actuellement active est 'en0', son adresse IPv4 est 192.168.1.35 comme on peut le voir sur la capture d'écran précédente.

### Y a-t-il des interfaces virtuelles sur votre machine ?

Non.

### Quelle interface vous permet de communiquer avec les autres PC et internet ?

L'interface en0.

## II - Configuration IP et validation

### Configurez la carte réseau

Sur mon réseau local, le routeur fonctionne en DHCP donc je laisse le DHCP activé. Quant aux DNS, mon opérateur me laisse libre de les choisir, ce sont les mêmes qu'à la question I-B.

### Que font ipconfig /release & ipconfig /renew ?

Sous Windows, elles permettent d'activer et de désactiver des interfaces. Cette commande n'étant pas disponible sous MacOS, il faudra gérer les interfaces réseau depuis l'utilitaire système :

![](https://i.ibb.co/0BXrVJ4/Capture-d-cran-2021-02-10-14-17-30.png)

### A quoi servent les commandes ipconfig /displaydns & ipconfig /flushdns ?

Sous Windows, la première affiche les paramètres DNS et la seconde vide le cache DNS.

### Utilisez ping pour tester la connectivité au réseau local et à internet

On effectue un ping vers le routeur :

![](https://i.ibb.co/rtwpBzx/Capture-d-cran-2021-02-10-14-23-07.png)

Et un autre vers Google : 

![](https://i.ibb.co/rFKdBfT/Capture-d-cran-2021-02-10-14-25-02.png)

La commande ping fonctionne en envoyant un paquet ICMP vers la destination et attend un retour de la part de ce même hôte. De plus, elle mesure le temps que prend la réponse pour arriver ainsi que le taux de paquets perdus afin de mesurer les performances du réseau.

Min correspond au temps de la requête la plus rapide, max celui de la plus lente & avg la moyenne sur toutes les requêtes effectuées.

## III - Table ARP

Grâce à la commande arp -a, on récupère l'entrée suivante :

![](https://i.ibb.co/wcG6MpJ/Capture-d-cran-2021-02-10-14-31-36.png)

Il s'agit d'une entrée dynamique.

Pour afficher toutes les entrées de l'interface en0, il faudraait utiliser la commande suivante :

arp -i en0 -a

## IV - Informations DNS

On utilise dig afin de récupérer les IP de Google :

![](https://i.ibb.co/q0JK4Y5/Capture-d-cran-2021-02-10-14-36-07.png)

Afin d'avoir les IPv6 on utilise ping6 google.com, on a déjà obtenu l'IPv4 avec la commande précédente :

![](https://i.ibb.co/ZBXhNf7/Capture-d-cran-2021-02-10-14-46-50.png)

On ne peut pas avoir le MAC d'un serveur Google car le protocole ARP ne sort pas du réseau local.

## V - Analyse avec Wireshark

Comme on peut le voir ci-dessous, les paquets capturés sont des paquets UDP qui est un protocole de couche 4 (Transport) : 

![](https://i.ibb.co/xz8kR6y/Capture-d-cran-2021-02-10-14-56-52.png)

Voici l'entête Ethernet d'une requête ping :

![](https://i.ibb.co/wWkQ3tm/Capture-d-cran-2021-02-10-15-01-30.png)

Il contient l'adresse de destination, l'adresse source, ainsi que le type d'IP utilisé (ici IPv4).

Voici l'entête IPv4 de cette même requête ainsi que se structure :

![](https://i.ibb.co/z2DzzWj/Capture-d-cran-2021-02-10-15-03-47.png)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/71/IPv4_Packet_-en.svg/1200px-IPv4_Packet_-en.svg.png)


Voici l'entête ICMP de la requête et sa structure : 
![](https://i.ibb.co/rZrJJsh/Capture-d-cran-2021-02-10-15-07-20.png)
![](https://www.researchgate.net/profile/Md_Nazmul_Islam/publication/316727741/figure/fig6/AS:614213521272838@1523451323139/Full-ICMP-Header-and-punnel.png)

Voici le paquet de réponse : 

![](https://i.ibb.co/bKZb28f/Capture-d-cran-2021-02-10-15-14-52.png)
![](https://i.ibb.co/7rpd10R/Capture-d-cran-2021-02-10-15-15-43.png)
![](https://i.ibb.co/7gbDqQD/Capture-d-cran-2021-02-10-15-16-26.png)


Le traffic ARP capturé pendant le ping est le suivant :

![](https://i.ibb.co/dt5VH5C/Capture-d-cran-2021-02-10-15-18-23.png)

Le but de cette requête est que le routeur connaisse l'adresse MAC du PC. Les adresses IP qui sont présentes sont celles du routeur et du PC. Les adresses MAC présentes sont celles du PC comme ont peut le voir dans la réponse ainsi que celle du routeur dans l'entête Ethernet.
