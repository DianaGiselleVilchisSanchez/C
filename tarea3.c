#include <stdio.h>
#include <string.h>
int main() {
    char palabra1[100];
    char palabra2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    int longitud1 = strlen(palabra1);
    int longitud2 = strlen(palabra2);

    if (longitud1 == longitud2) {
        int comparacion = strcmp(palabra1, palabra2);
        if (comparacion == 0) {
            printf("¡Ambas palabras son iguales!\n");
        } else if (comparacion < 0) {
            printf("La primera palabra '%s' es menor que la segunda palabra '%s'\n", palabra1, palabra2);
        } else {
            printf("La primera palabra '%s' es mayor que la segunda palabra '%s'\n", palabra1, palabra2);
        }
    } else if (longitud1 < longitud2) {
        printf("La primera palabra '%s' es menor que la segunda palabra '%s'\n", palabra1, palabra2);
    } else {
        printf("La primera palabra '%s' es mayor que la segunda palabra '%s'\n", palabra1, palabra2);
    }

    return 0;
}