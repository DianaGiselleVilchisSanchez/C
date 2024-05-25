/*Ejercicio: crear un arreglo de 100 posiciones
llenar el arreglo con la tabla del 2
mostrar el codigo en pantalla*/

#include <stdio.h>

int main() {
    int tabla_del_2[100];
    int i = 0;
    while (i < 100) {
        tabla_del_2[i] = (i + 1) * 2;
        i++;
    }
    i = 0;
    while (i < 100) {
        printf("%d ", tabla_del_2[i]);
        i++;
    }
    return 0;
}

