/*Crear un arreglo de 100 posiciones
llenar en el orden inverso al indice
mostrar el arreglo en pantalla*/
#include <stdio.h>
int main() {
    int arreglo[20];
    int i = 0;
    while (i < 20) {
        arreglo[i] = 20 - i;
        i++;
    }
    i = 0;
    while (i < 20) {
        printf("%d ", arreglo[i]);
        i++;
    }
    return 0;
}
