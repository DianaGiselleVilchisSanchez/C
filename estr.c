#include<stdio.h>

struct CD {
    char titulo [100];
    char artista [50];
};

int main (void){
    struct CD cd1;
    char titulo;
    printf ("ingresa el titulo\n");
    scanf("%s", &cd1.titulo);

    printf ("%s\n", cd1.titulo);
    return 0;
}