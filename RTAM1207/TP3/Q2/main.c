#include <stdio.h>
#include <time.h>

void safeIntInput(int *buf, int maxChars);
int recursiveSquare(long long int nombre);
int loopPower(int nombre, int puissance);
int recursivePower(long long int nombre, int puissance);
int optimizedRecursivePower(long long int nombre, int puissance);

int main(void) {
    long long int nombre;
    int puissance = 89;
    printf("Entrez un nombre entier : ");
    safeIntInput(&nombre, 12);

    /*
    int result = recursiveSquare(nombre);
    printf("Le carré de %d est %d.\n", nombre, result);

    int resultPower = loopPower(nombre, puissance);
    printf("%d ^ %d = %d\n", nombre, puissance, resultPower);
     */

    clock_t t;

    // NON OPTIMIZED RECURSIVE FUNCTION

    t = clock();
    int resultRPower = recursivePower(nombre, puissance);
    t = clock() - t;
    printf("%d ^ %d = %d\n", nombre, puissance, resultRPower);
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("recursivePower() took %f seconds to execute \n", time_taken);

    // OPTIMIZED RECURSIVE FUNCTION

    t = clock();
    int optimizedPower = optimizedRecursivePower(nombre, puissance);
    t = clock() - t;

    printf("%d ^ %d = %d\n", nombre, puissance, optimizedPower);

    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("optimizedRecursivePower() took %f seconds to execute \n", time_taken);

    return 0;
}

int loopPower(int nombre, int puissance) {
    int nb = 1;

    for(int i = 0; i < puissance; i++) {
        nb *= nombre;
    }
    return nb;
}

int recursivePower(long long int nombre, int puissance) {
    if(puissance > 0)
        return (nombre * recursivePower(nombre, puissance - 1));
    else return 1;
}

int optimizedRecursivePower(long long int nombre, int puissance) {
    if(puissance == 0)
        return 1;

    if(puissance %2 == 0)
        return (recursiveSquare(optimizedRecursivePower(nombre, puissance / 2)));
    else
        return nombre * optimizedRecursivePower(nombre, puissance - 1);
}

int recursiveSquare(long long int nombre) {
        return nombre * nombre;
}

void safeIntInput(int *buf, int maxChars) { // In max chars, put +1 according to how much character you want the user to put...
    char strBuf[maxChars];

    if(fgets(strBuf, maxChars, stdin)) {
        sscanf(strBuf, "%d", buf);
    } else {
        puts("Vous n'avez pas entré un nombre; merci de recommencer.");
    }

    fflush(stdin); // Mandatory to avoid problems...
} // safeIntInput(int, int)