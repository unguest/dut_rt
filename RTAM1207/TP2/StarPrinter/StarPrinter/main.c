#include <stdio.h>

void printRectangle(int longueur, int largeur);
void printNumberRectangles(int longueur, int largeur);
void printTriangle(int max);
void printReverseTriangle(int max);
short isPrime(int number);

int main() {

    printRectangle(6, 3);

    puts("");

    printNumberRectangles(8, 4);

    puts("");

    printTriangle(8);

    puts("");

    printReverseTriangle(6);

    isPrime(12);
    isPrime(11);

    return 0;
}

void printRectangle(int longueur, int largeur) {
    for (int i = 0; i < largeur; ++i) {
        for (int j = 0; j < longueur; ++j) {
            printf("*");
        }
        puts("");
    }
}

void printNumberRectangles(int longueur, int largeur) {
    for (int i = 1; i <= largeur; ++i) {
        for (int j = 1; j <= longueur; ++j) {
            printf("%d ", i + j);
        }
        puts("");
    }
}

void printTriangle(int max) {
    for (int i = 0; i < max; ++i) {

        for (int j = 0; j < i; ++j)
            printf("*");

        puts("");
    }
}

void printReverseTriangle(int max) {

    for (int i = 0; i < max; ++i) {

        for (int j = 0; j < max - i - 1; ++j)
            printf(" ");

        for (int f = 0; f <= i; ++f)
            printf("*");

        puts("");
    }

}

short isPrime(int number) {

    if(number <= 1) {
        printf("%d n'est pas premier.", number);
        puts("");
        return 1;
    }


    for (int i = 2; i < number; ++i) {
        if(number % i == 0) {
            printf("%d n'est pas premier.", number);
            puts("");
            return 1;
        }

    }

    printf("%d est premier.", number);
    puts("");
    return 0;
}