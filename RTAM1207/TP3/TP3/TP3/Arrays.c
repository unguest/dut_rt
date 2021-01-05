//
//  Arrays.c
//  TP3
//
//  Created by Arthur Pons on 04/01/2021.
//

#include "Arrays.h"
#include <stdio.h>
#include <stdbool.h>
#include "main.h"

void printIntArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Array[%d] : %d\n", i, *(array + i));
    } // for
} // printIntArray(int*, int)

void fillFrom100(int *array, int size) {
    for (int i = 0; i < size; i++) {
        *(array + i) = 100 - i;
    }
} // fillFrom100(int*, int)

void fillFromUser(int *array, int size) {
    int userInput = 0;
    for (int i = 0; i < size; i++) {
        printf("Array[%d] : ", i);
        safeIntInput(&userInput, 12);
        *(array + i) = userInput;
    }
}

bool isInArray(int *array, int size, int value) {
    for (int i = 0; i < size; i++) {
        if(*(array + i) == value) return true;
    }
    return false;
}

void reverseArray(int *array, int size, int *buf) {
    
}

bool isPalindrome(int *array, int size) {
    for(int i = 0; i < size; i++){
        if(*(array + i) != *(array - i)) return false;
    }
    return true;
}
