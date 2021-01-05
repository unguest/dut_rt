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
        printf("[%d] ", *(array + i));
    } // for
    
    puts("");
    
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
    int tmp;
    for(int i = 0; i < size; i++) {
        tmp = size - i - 1;
        *(buf + i) = *(array + tmp);
    }
}

bool isPalindromic(int *array, int size) {
    int reversedArray[size];
    reverseArray(array, size, reversedArray);
    for(int i = 0; i < size; i++){
        if(*(array + i) != reversedArray[i]) return false;
    }
    return true;
}
