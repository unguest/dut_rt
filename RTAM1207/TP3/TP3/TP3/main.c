//
//  main.c
//  TP3
//
//  Created by Arthur Pons on 04/01/2021.
//

#include <stdio.h>
#include "Arrays.h"
#include "main.h"

void safeIntInput(int *buf, int bufsize);
void arrays(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    puts("Bienvenue dans le TP3 !");

    int choice = 0;
    
    puts("1 - Tableaux");
    puts("2 - Fonctions");
    puts("3 - Tchou tchou !");
    puts("4 - Quitter :(");
    
    printf("$> ");
    
    safeIntInput(&choice, 2);
    
    switch (choice) {
        case 1:
            arrays();
            break;
        
        case 2:
            // TODO Fonctions
            break;
            
        case 3:
            // TODO Train functions
            break;
            
        default:
            break;
    }

    return 0;
} // main

void safeIntInput(int *buf, int maxChars) { // In max chars, put +1 according to how much character you want the user to put...
    char strBuf[maxChars];
    
    if(fgets(strBuf, maxChars, stdin)) {
        sscanf(strBuf, "%d", buf);
    } else {
        puts("Vous n'avez pas entré un nombre; merci de recommencer.");
    }
} // safeIntInput(int, int)


void arrays(void){
    int lookValue;
    int intArray[20] = {0};
    fillFrom100(intArray, 20);
    //fillFromUser(intArray, 20);
    printIntArray(intArray, 20);
    
    printf("Cherchez une valeur dans le tableau : ");
    fgetc(stdin); // I don't know why but this is mandatory for the next line to work properly...
    safeIntInput(&lookValue, 12);
    
    if(isInArray(intArray, 20, lookValue))
        printf("%d est dans le tableau !\n", lookValue);
    else
        printf("%d n'est pas dans le tableau...\n", lookValue);
    
    int array[] = {10, 11, 12, 13, 13, 12, 11, 10};
    
    puts(isPalindrome(array, 8));
}
