# TP 1 - Arthur Pons
Jeudi 17 Septembre 2020

## Question 1
L'option '-i' sert à demander à l'utilisateur une confirmation avant d'effacer chaque élément.

## Question 2
On execute le script [albert.sh](https://github.com/unguest/dut_rt/blob/master/RTAM1105/albert.sh) : 

```bash
#!/bin/bash

mkdir -p TP_init/Albert/Vacances/{Photos,Videos}
mkdir -p TP_initiation/Albert/Travail/{TP, Cours}
```
## Question 3
On télécharge le fichier puis on le décompresse: 

```bash
tar xvzf fichiers_TP1.tgz
```
## Question 4
On execute:

```bash
firefox &
```

## Question 5

 ```bash
 ls /bin > /tmp/resultats.txt
 ```
 
 ## Question 6
 On ajoute le contenu de /var/log dans /tmp/resultats.txt puis on affiche le contenu du fichier resultats.txt afin de permettre à l'utilisateur de vérifier que le contenu est bon :
 
 ```bash
 ls /var/log >> /tmp/resultats.txt
 less /tmp/resultats.txt
 ```
## Questions avancées

### Lister le contenu de /var/log

```bash
cd /var/log
ls -laR
```

### Lister les fichiers en les triant en fonction de leur date de dernière modification

```bash
cd /var/log
ls -laRt
```
