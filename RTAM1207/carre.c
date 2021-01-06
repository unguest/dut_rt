//
//  main.c
//  TP2
//
//  Created by Arthur Pons on 04/01/2021.
//

#include <stdio.h>

void safeIntInput(int *buf);

int main(void) {
    
    int userInput = 0;
    
    printf("Entrez un nombre : ");
    
    safeIntInput(&userInput);
    
    printf("Le carré de %d est %d\n", userInput, userInput * userInput);
    
    return 0;
}

void safeIntInput(int *buf) {
    char strBuf[11];
    if(fgets(strBuf, 10, stdin)) {
        sscanf(strBuf, "%d", buf);
    } else {
        puts("Vous n'avez pas entré un nombre; merci de recommencer.");
    }
}
