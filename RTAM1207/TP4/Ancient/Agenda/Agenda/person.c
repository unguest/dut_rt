//
//  person.c
//  Agenda
//
//  Created by Arthur Pons on 18/01/2021.
//

#include "person.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extractPersons(char *filename, struct Person *buffer) {
    FILE *file = fopen(filename, "r");
    char line[800]; //Max length for a line is 800

    char tmpName[256];
    char tmpSurname[256];
    char tmpEmail[256];
    char tmpPhone[32];

    int i = 0;

    if(!file)
        exit(-1);
    
    while (fgets(line, 800, file))
    {
        sscanf(line, "%s,%s,%s,%s", tmpName, tmpSurname, tmpEmail, tmpPhone); // Extracts data from line

        strcpy(buffer[i].name, tmpName);
        strcpy(buffer[i].surname, tmpSurname);
        strcpy(buffer[i].email, tmpEmail);
        strcpy(buffer[i].phone, tmpPhone);        
    } // Parse whole file
    
}