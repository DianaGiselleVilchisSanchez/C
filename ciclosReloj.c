#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x;
    int * arreglo;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);


    clock_t t0 = clock();

    arreglo = (int *)malloc (x * sizeof(int));
    
    if(arreglo == NULL)  (exit (1));
    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor numero %d:\n", i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("El arreglo es:");
    for (int i=0; i<x; i++) {
        printf("%d ", arreglo[i]);
        printf ("\n");
    }
    
    free(arreglo);
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    
    printf("Tiempo de ejecución: %f segundos\n", time);

    return 0;
}