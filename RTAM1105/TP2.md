# TP 2

## Question 1

Afficher les fichiers du répertoire courant par date de création croissante : 

```bash
$ ls --sort=time
```

Afficher la taille des fichiers de manière plus lisible : 

```bash
$ ls -lh
```

Stocker la liste des fichiers du répertoire courant dans le fichier res1.txt : 

```bash
$ ls -al > res1.txt
```

## Question 2

Afficher les lignes du fichier /etc/networks qui contiennent 'loopback' :

```bash
$ cat /etc/networks |grep loopback
```

Afficher les lignes du fichier de configuration /usr/lib/systcl.d/50-default.conf qui est lié aux configuration des interfaces ethernet (contient sysrq en minuscule ou majuscule) :
rm new_file 
rm : supprimer fichier vide (protégé en écriture) « new_file » ? y

```bash
$ cat /usr/lib/systcl.d/50-default/conf|grep -i sysrq # -i : ignore case
```

Connectez-vous en root et utilisez nano pour modifier le fichier /usr/lib/systcl.d/50-default.conf :

```bash
$ sudo su - 
# nano /usr/lib/systcl.d/50-default.conf
# exit
```

## Question 3

Sous le compte étudiant, créez un nouveau fichier et affichez ses droits. Justifiez leur valeur.

```bash
$ touch new_file
$ ls -alh new_file 
-rw-r--r--. 1 apons etud 0  1 oct.  14:29 new_file
```

Étant donné le umask 022, on retire alors 2 aux autres utilisateurs ainsi qu'au groupe de l'utilisateur; or 2 correspond au droit d'écrire dans un fichier donc il est normal que les autres utilisateurs ne puissent que lire ce nouveau fichier.

De plus, aucun droit d'execution n'est donné de base à un fichier, ça sera à l'utilisateur de spécifier ce droit via chmod +x par exemple.

```bash
$ mkdir new_folder
$ ls -alh new_folder/
total 8,0K
drwxr-xr-x. 2 apons etud 4,0K  1 oct.  14:39 .
drwxr-xr-x. 5 apons etud 4,0K  1 oct.  14:39 ..
```

Toujours 'à cause' du umask 022 executé plus tôt, on retire 2 à la valeur octale des droits de ce répertoire. Ainsi, seul l'utilisateur propriétaire du dossier à l'autorisation de modifier les fichiers de ce répertoire, tandis que le groupe de l'utilisateurs et tous les autres utilisateurs ne peuvent que 'traverser' ce dossier et afficher son contenu.

Modifiez le masque pour que seul un accès en lecture soit laissé au groupe et aucun droit pour les autres utilisateurs.

```bash
$ umask 037 # 3 retire les droits de modification des dossiers ainsi que le droit de 'traverser' ce même répertoire
          # 7 retire tous les droits pour les autres utilisateurs
$ ls -alh new_folder/
total 8,0K
drwxr-----. 2 apons etud 4,0K  1 oct.  14:39 .
drwxr-xr-x. 5 apons etud 4,0K  1 oct.  14:39 ..
```
Modifiez le masque pour retirer tout droit sur un fichier pour tout utilisateur, même le propriétaire. Est-il possible de supprimer le fichier ?

```bash
$ chmod 000 new_file
ls -alh new_file
----------. 1 apons etud 0  1 oct.  14:47 new_file
$ rm new_file 
rm : supprimer fichier vide (protégé en écriture) « new_file » ? y
```

On peut tout de même supprimer ce fichier, rm demande cependant une confirmation.


## Question 4

Créez un fichier en tant que root et modifiez ses droits pour que seuls root et son groupe puisse lire et écrire, puis donner les droits afin qu'un etudiant puisse l'éditer.

```bash
# touch new_file && chmod 660 new_file
# ls -alh new_file
-rw-rw----. 1 root root 0  1 oct.  15:03 new_file
# su apons 
$ nano new_file # impossible d'ouvrir le fichier
# chmod 666
$ nano new_file # Edition possible du fichier
```

## Question 5

Soit le fichier suivant : 

----- file.txt -----

1- monsieur dupont

2- monsieur durant

3- Monsieur dubois

4- madame martin

5- mon sieur truc

-----    EOF   -----

Quel est le résultat de grep monsieur file.txt ? : Il affiche les lignes 1 & 2 car la commande est sensible à la casse donc ignore la ligne 3 & la ligne 5 ne contient pas la chaîne exacte 'monsieur'.

Quel est le résultat de ```bash grep monsieur file.txt|wc -l ``` ? : La commande renvoie 2 car 2 lignes correspondent à la condition imposée à grep.


Quel est le résultat de grep -i monsieur file.txt ? : Il affiche les lignes 1,2 & 3 car la commande est insensible à la casse donc prend en compte la ligne 3 & la ligne 5 ne contient pas la chaîne exacte 'monsieur'.


Quel est le résultat de grep -i monsieur file.txt > resultat.txt ? : Rien n'est renvoyé dans le terminal car le flux est redirigé dans le fichier resultat.txt .

