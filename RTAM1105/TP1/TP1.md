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
On télécharge le fichier puis on le décompresse avant d'éxecuter le script [trier_albert.sh](https://github.com/unguest/dut_rt/blob/master/RTAM1105/trier_albert.sh): 

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
ls -R
```

### Lister les fichiers en les triant en fonction de leur date de dernière modification

```bash
cd /var/log
ls -Rt
```
### Afficher les droits des fichiers dans /etc

```bash
stat -c "%a %n" /etc/*
```

### Afficher /etc/passwd

```bash
less /etc/passwd
```

### Afficher les 3 premières lignes de /etc/passwd

```bash
head -n 3 /etc/passwd
```

### Afficher les 3 dernières lignes de /etc/passwd

```bash
head -n 3 /etc/passwd
```

### Copier /bin/ls dans /tmp, le renommer 'affiche' puis le tester

```bash
cp /bin/ls /tmp
mv /tmp/ls /tmp/affiche
chmod +x /tmp/affiche
./tmp/affiche
```

### Faire appartenir /tmp/affiche à 'root'

```bash
sudo chown root:root /tmp/affiche
```

### Rendre le fichier lisible et executable par 'root' uniquement

```bash
sudo chmod 500 /tmp/affiche
```

### Lister le contenu de la racine

```bash
ls /
```

### Afficher le nombre de lignes de /etc/passwd

```bash
wc -l /etc/passwd
```

### Rechercher un fichier nommé 'messages'

```bash
find / 2>/dev/null|grep messages
```

### Créer un répertoire 'essai' dans /tmp

```bash
mkdir /essai/tmp
```

### Copier récursivement /var/log dans /tmp/essai

```bash
cp -r /var/log /tmp/essai
```

### Afficher récursivement les fichiers dans /tmp/essai/log

```bash
ls -lR /tmp/essai/log
```

### Supprimer les fichiers ayant pour extension .gz dans /tmp/essai/log

```bash
rm -rf /tmp/essai/log/*.gz
```

### Dans quel répertoire se trouve ifconfig ?

```bash
which ifconfig
```

### Rechercher dans quel(s) répertoire(s) se trouve(nt) le(s) fichier(s) sshd

```bash
find / 2>/dev/null|grep sshd
```

### Lister tous les fichiers de /tmp modifiés dans les 15 dernières minutes

```bash
find /tmp -mmin -15 -type f -exec ls -l {} +
```

### Trouver tous les groupes auxquels appartien notre utilisateur

```bash
groups
```

### Afficher les utilisateurs qui on un shell par défaut en /bin/false

```bash
cat /etc/passwd|grep "/bin/false"| cut -d ':' -f 1
```

EOF
