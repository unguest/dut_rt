//
//  main.c
//  Agenda
//
//  Created by Arthur Pons on 11/01/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "person.h"

#define INT_MAX_CHARS 12
#define STR_MAX_LENGTH 256

void menu(void);
void safeIntInput(int *buf);

int main(void) {
    struct Person buffer[256]; // We consider that a agenda can have 256 persons in it max.
    extractPersons("agenda.csv", buffer);

    for(int i = 0; i < 2; i++) {
        printf("%s %s %s %s", buffer[i].name, buffer[i].surname, buffer[i].email, buffer[i].phone);
    }

    puts("Au revoir !");
    return 0;
}

void menu(void) {
    int choice = 0;
    
    /*while(choice != 4) {
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
                struct Person buffer[256]; // We consider that a agenda can have 256 persons in it max.
                extractPersons("agenda.csv", buffer);
                puts("KARAMBA");
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
    } */
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
