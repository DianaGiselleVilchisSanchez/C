#include <stdio.h>
#include <string.h>

int main() {
    int s;
    char palabra1[20];
    char palabra2[20];
    char temporal[20];

    
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    printf("\nAntes:\n");
    printf("Palabra 1: %s\n", palabra1);
    printf("Palabra 2: %s\n", palabra2);

    
    strcpy(temporal, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, temporal);

    
    printf("\nDespués:\n");
    printf("Palabra 1: %s\n", palabra1);
    printf("Palabra 2: %s\n", palabra2);

    return 0;
}