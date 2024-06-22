//Crea un arreglo de tamaño x, en donde x es ingrsado por el teclado.
//Llena todos los elementos del arreglo con datos ingresados por el usuario usando apuntadores

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    int *arreglo = (int *)malloc(x * sizeof(int));

    for (int i = 0; i < x; ++i) {
        printf("Ingresa un numero para el elemento %d: ", i);
        scanf("%d", (arreglo + i)); 
    }

    printf("Elementos del arreglo: ");
    for (int i = 0; i < x; ++i) {
        printf("%d ", *(arreglo + i)); 
    }
    printf("\n");

    free(arreglo);

    return 0;
}