
//Codigo de direcciones de arreglo
#include <stdio.h>
int main (void){
    int i[10], x;
    float f[10];
    printf ("\t\tEntero\t\tFlotante\n\n");
    for (x=0; x<10; x++){
        printf("Elemento %d:\t%ls\t\t%d\n", x, &i[x], &f[x]);
    }
    return 0;
}