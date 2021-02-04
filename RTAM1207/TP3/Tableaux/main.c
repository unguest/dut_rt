#include <stdio.h>

int main(void) {
    
    int tab[10][10] = {0};

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            tab[i][j] = (10 * i) + j;
    } // for

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%3d",tab[i][j]);
        printf("\n");
    } // printing for


    return 0;
}