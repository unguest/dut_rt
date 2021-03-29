#include <stdio.h>

size_t mystrlen(char *string);
void nbminmaj(char *str, int *min, int *maj);

int main() {

    int min, maj;

    printf("J'ai deja fini le TP 4 donc on va s'amuser un peu...\n");

    puts("On commence light avec un strlen ('Hello, World !') : ");
    printf("%zu\n", mystrlen("Hello, World !"));


    nbminmaj((char*) "Hello, World !", &min, &maj);
    printf("D'ailleurs, je ne sais pas si vous savez mais dans 'Hello, World !', il y a %d minuscules et %d majuscules.", min, maj);

    return 0;
}

size_t mystrlen(char *string) {
    size_t i = 0;
    while( *(string + i++)  != '\0');
    return i-1;
}

void nbminmaj(char *str, int *min, int *maj) {
    int i = 0;
    *min = 0; *maj = 0;
    while(*(str + i) != '\0') {
        if( str[i] >= 'A' && str[i] <= 'Z') (*maj)++;
        else if( str[i] >= 'a' && str[i]<= 'z') (*min)++;
        i++;
    }
}
