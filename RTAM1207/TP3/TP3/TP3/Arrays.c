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
    
    puts(""); // print a \n
    
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

void askGrade(int *array, int index) {
    int grade;
    printf("Selctionnez une note entre 1 & 20 : ");
    safeIntInput(&grade, 3);
    puts("");
    
    while (grade < 0 || grade > 20) {
        printf("Selctionnez une note entre 1 & 20 : ");
        safeIntInput(&grade, 3);
        puts("");
    }
    
    *(array + index) = grade;
}

void printGrades(int *gradesArray, int size) {
    for(int i = 0; i < size; i++){
        if(*(gradesArray + i) != 0) {
            printf("%d élève(s) ont eu %d\n", *(gradesArray + i), i);
        }
    }
}
