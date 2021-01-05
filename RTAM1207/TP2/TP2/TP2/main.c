//
//  main.c
//  TP2
//
//  Created by Arthur Pons on 04/01/2021.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdarg.h>

int safeIntInput(int *buf);
bool isPair(int number);
int max(int count, ...);

int main(void) {
    
    int firstNumber, secondNumber, thirdNumber;
    
    printf("Entrez un nombre : ");
    
    if(!safeIntInput(&firstNumber)) return -1;
    
    if(isPair(firstNumber)) {
        printf("%d est un nombre pair.\n", firstNumber);
    } else {
        printf("%d est un nombre impair.\n", firstNumber);
    }
    
    puts("Entrez deux nombres.");
    
    printf("Nombre 1 : ");
    
    if(!safeIntInput(&secondNumber)) return -1;
    
    printf("Nombre 2 : ");
    
    if(!safeIntInput(&thirdNumber)) return -1;
    
    bool isSecondNumberPair = isPair(secondNumber);
    bool isThirdNumberPair = isPair(thirdNumber);
    
    if(isSecondNumberPair && isThirdNumberPair) {
        puts("Les deux nombres sont pairs.");
    } else if (isSecondNumberPair ^ isThirdNumberPair) {
        puts("Seulement l'un des deux nombres est pair.");
    } else {
        puts("Aucun de ces deux nombres n'est pair");
    }
    
    max(2, secondNumber, thirdNumber);
    
    /*
     On pourrait aussi faire un compteur de nombres pairs que l'on passerait par référence
     dans la fonction isPair(int) puis voir si cette valeur vaut 0, 1 ou 2.
     */
    
    return 0;
} // main()

int safeIntInput(int *buf) {
    char strBuf[11];
    if(fgets(strBuf, 10, stdin)) {
        sscanf(strBuf, "%d", buf);
        return true;
    } else {
        puts("Vous n'avez pas entré un nombre; merci de recommencer.");
        return false;
    }
} // safeInput(*int)

bool isPair(int n) {
    return !(n % 2);
} // isPair(int)

int max(int count, ...) {
    va_list list;
    int j = 0;

    int max = 0;
    int currentArg;
    
    va_start(list, count);
    
    for(j=0; j<count; j++)
    {
        currentArg = va_arg(list, int);
        if(j == 0)
            max = currentArg;
        else {
            if(currentArg > max) {
                max = currentArg;
            } // if
        } // else
      
    } // for

    va_end(list);

    printf("Le nombre le plus grand est %d\n", max);
    
    return count;
}
