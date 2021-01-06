# Introduction au C - Module RTAM1207

## Histoire du C

Créé en 1972 par Denis Ritchie et Ken Thompson dans les labos Dell en même temps qu'Unix.

Unix, Linux, Windows, MacOS, Python, la JVM etc... sont écrits en C.

A titre de comparaison, le C est plus de 75 fois moins énergivore que C.

Le C à influencé la majorité des langages de programmation mainstream.

## Forces et faiblesses du C

Langage bas niveau, puissant et très utilisé; standard ouvert; optimise l'espace mémoire et ainsi les performances.

Les bibliothèques sont disponible sur de nombreuses architectures.

Pas de GC, déboggage complexe et Third-Party (vlint, Valgrind...)

## Le C et vous

Langage compilé : il faut passer par un compilateur (gcc, clang...) pour obtenir un exécutable.

Editeurs de code recommandés : VI, Vim, VSCode, CodeBlocks (IDE), CLion (IDE)...


## Premier programme en C

```C
#include <stdio.h>

int main(void) {
	printf("Hello World !");
}
```