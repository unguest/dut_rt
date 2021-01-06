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
    
    fflush(stdin); // Mandatory to avoid problems...
} // safeIntInput(int, int)


void arrays(void){
    /*
    
     // Première partie sur les généralités des tableaux
     
    int lookValue;
    int intArray[20] = {0};
    
    int array[] = {10, 11, 12, 13, 13, 12, 11, 10};
    int reversedArray[8];

    printIntArray(intArray, 20);
    
    fillFrom100(intArray, 20);
    fillFromUser(intArray, 20);
    
    printf("Cherchez une valeur dans le tableau : ");
    safeIntInput(&lookValue, 12);
    
    if(isInArray(intArray, 20, lookValue))
        printf("%d est dans le tableau !\n", lookValue);
    else
        printf("%d n'est pas dans le tableau...\n", lookValue);
    
    reverseArray(array, 8, reversedArray);
    
    printIntArray(reversedArray, 8);
    
    if(isPalindromic(array, 8)){
        printf("Le tableau est palindromique.\n");
     
    }*/
    
    // Deuxième partie sur le tableau contenant les notes
    
    int notes[15] = {0};
    int effectifs[20] = {0};
    
    for(int i = 0; i < 15; i++){
        printf("Note for the %d th student : \n", i + 1);
        askGrade(notes, i);
        effectifs[notes[i]]++;
    }
    printIntArray(notes, 15);
    printGrades(effectifs, 20);
}
