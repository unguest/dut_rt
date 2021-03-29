# TP Bases Commutateurs

## Combien d'interfaces y-a-t-il ?

On compte 24 interfaces FastEthernet, 2 Interfaces GigabitEthernet.

Pour les lignes VTY, on a les intervalles 04 & 05 / 15.

## Pourquoi un message d'erreur s'affiche lorsque l'on execute 'show startup-config' ?

Car on a pas encore sauvegardé de configuration de démarrage dans la NVRAM.

## Executer 'show interface Vlan1'

On observe que l'adresse IP du VLan n'est pas encore configurée. L'adresse MAC virtuelle est reliée au CPU (000d.bd61.a3be).

Cette interface ne fonctionne pas encore car elle est 'down'.

## Executer 'show ip interface Vlan1'

Output : ```Vlan1 is administratively down, line protocol is down
  Internet protocol processing disabled```

## Afficher les infos de la version d'IOS présente sur le switch

La version d'IOS exécutée est la 12.2.25.

Le nom du fichier de l'OS est ```c2960-lanbase-mz.122-25.FX.bin```.

L'adresse MAC base du commutateur est 000d.bd61.a3be.

## Afficher les infos de l'interface FastEthernet 0/18

L'interface est désactivée, on peut l'activer avec la commande ```no shutodown``` dans le menu donc configuration de l'interface.

L'adresse MAC de cette interface est 000A.41DC.DA12.

L'interface est configurée en Hafl-Duplex avec un débit de 100 Mbps.


## Afficher les info du VLan

```show vlan``` : Le VLAN est actif et est en mode VLAN par port par défaut.

## Lister les fichiers présents dans la mémoire FLASH.

Le fichier trouvé est le fichier contenant le système d'exploitation.		