#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int * arreglo;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    arreglo = (int *)malloc (x * sizeof(int));
    
    if(arreglo == NULL)  (exit (1));
    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor numero %d:\n", i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("El arreglo es:\n");
    for (int i=0; i<x; i++) {
        printf("%d ", arreglo[i]);
        printf ("\n");
    }
    
    free(arreglo);
    return 0;
}