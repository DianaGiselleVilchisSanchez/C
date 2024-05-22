/*Imprimir todos los numeros que son divisibles entre 2 y 
entre 7, mayores a 0 y menores a 1000*/

#include <stdio.h>
int main() {
    printf("Numeros divisibles entre 2 y entre 7:\n");
    for(int i = 1; i < 1000; i++) {
        if(i % 2 == 0 && i % 7 == 0) {
            printf("%d, ", i);
        }
    }
    return 0;
}