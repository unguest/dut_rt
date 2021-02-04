//
//  person.h
//  Agenda
//
//  Created by Arthur Pons on 18/01/2021.
//

#ifndef person_h
#define person_h

#include <stdio.h>

struct Person {
    char name[256];
    char surname[256];
    char email[256];
    char phone[32];
} Person;

void extractPersons(char *filename, struct Person *buffer);

#endif /* person_h */
