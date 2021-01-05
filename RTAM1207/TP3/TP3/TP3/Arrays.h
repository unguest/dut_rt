//
//  Arrays.h
//  TP3
//
//  Created by Arthur Pons on 04/01/2021.
//

#ifndef Arrays_h
#define Arrays_h

#include <stdio.h>
#include <stdbool.h>

void printIntArray(int *array, int size);
void fillFrom100(int *array, int size);
void fillFromUser(int *array, int size);
bool isInArray(int *array, int size, int value);
bool isPalindrome(int *array, int size);

#endif /* Arrays_h */
