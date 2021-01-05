# TP 1 Langage C

## Question 1 : Que fait ce programme ?

```C
#include <stdio.h>

int main(void)
{
     int a;
     float b;
     a=3;
     a=a+2;
     b=2.2;
     printf("Résultat : %d et %d\n",a,b)
}
```

Ce programme tel quel n'est pas valide  :
    - Il manque le point virgule après l'appel de la fonction `printf`.
    - Le deuxième %d est une erreur, il devrait être remplacé par un `%f`.

Il déclare un entier (a) et un flottant (b). Il affecte 3 à a puis y ajoute 2; a est donc égal à 5. 

Ensuite, il affecte la valeur 2.2 à b puis affiche la valeur de a et de b dans le terminal.

Enfin le programme retourne 0 afin d'indiquer qu'il n'y a pas d'erreur.

## Question 2 : Que fait ce programme ?

```C
#include <stdio.h>

int main(void)
{
     char a=98;
     char b=111;
     printf("%d%d%d\n",a,b,a);
     printf("%c%c%c\n",a,b,a);
     printf("%d%d%d\n",a+1,b++,a);
     printf("%c%c%c\n",a+1,--b,a+1);
	return 0; 
}
```

Il créé et initialise deux caractères a et b avec les caractères 'b' et 'o' respectivement.

Ensuite, il affiche les variables a, b puis a en les considérant comme des entiers ce qui donne '9811198' dans le terminal.

La ligne suivante affiche les mêmes variables mais en les considérant comme des charctères ce qui donne 'bob' dans le terminal.

Les deux derniers appels de `printf` fonctionnent comme suit :

L'avant dernier affiche a + 1, b qu'il incrémentera __ensuite__, puis a en considérant les variables comme des entiers ce qui donne '9911198' dans la sortie standard.

Le dernier affiche a + 1, décrémente b puis l'affiche et enfin a + 1 en considérant les variables comme des caractères ce qui donne 'coc' dans le terminal.

Enfin le programme retourne 0 afin d'indiquer qu'il n'y a pas d'erreur.
