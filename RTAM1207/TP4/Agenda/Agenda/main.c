//
//  main.c
//  Agenda
//
//  Created by Arthur Pons on 11/01/2021.
//

#include <stdio.h>
#include <stdlib.h>

#define INT_MAX_CHARS 12
#define STR_MAX_LENGTH 256

void menu(void);
void safeIntInput(int *buf);

int main(void) {

    menu();
    puts("Au revoir !");
    return 0;
}

void menu(void) {
    int choice = 0;
    
    while(choice != 4) {
        puts("##### Bienvenue dans votre agenda #####");
        puts("1 - Afficher tous mes contacts");
        puts("2 - Rechercher un contact");
        puts("3 - Ajouter un contact");
        puts("4 - Quitter");
        
        printf("> ");
        safeIntInput(&choice);
    
        switch (choice) {
            case 1:
            {
                FILE *file;
                file = fopen( "agenda.csv", "r");
                break;
            }
                
            case 4:
            {
                puts("Au revoir !");
                break;
            }

                
            default:
                break;
        }
    }
}

void safeIntInput(int *buf) {
    char strBuf[INT_MAX_CHARS];
    
    while(!fgets(strBuf, INT_MAX_CHARS, stdin)) {
        sscanf(strBuf, "%d", buf);
        fflush(stdin); // Mandatory to avoid problems...s
    }
    

} // safeIntInput(int)

void safeStringInput(char *buf) {
    char strBuf[STR_MAX_LENGTH];
    
    while (!fgets(strBuf, STR_MAX_LENGTH, stdin)) {
        sscanf(strBuf, "%s", buf);
        fflush(stdin); // Mandatory to avoid problems...
    }
} // safeStringInput(int)
