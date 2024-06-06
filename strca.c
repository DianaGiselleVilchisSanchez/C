#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100];
    char palabra2[100];

    // Solicitar al usuario que ingrese las dos palabras
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    // Calcular la longitud de la primera palabra
    int longitud = strlen(palabra1);

    // Concatenar la segunda palabra a la primera palabra N veces
    for (int i = 0; i < longitud; ++i) {
        strcat(palabra1, palabra2);
    }

    // Imprimir el resultado
    printf("Palabra 1: %s\n", palabra1);

    return 0;
}