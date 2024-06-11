#include <stdio.h>
#include <string.h>

int main() {
   
    char palabra1[20];
    char palabra2[20];
    char len[20];

    printf("Ingrese la primer palabra: \n");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: \n");
    scanf("%s", palabra2);

    printf("\nAntes:\n");
    
    printf("Palabra 1: %s\n", palabra1);
    printf("Palabra 2: %s\n", palabra2);

    
    strcpy(len, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, len);

    
    printf("\nDespués:\n");
    printf("Palabra 1: %s\n", palabra1);
    printf("Palabra 2: %s\n", palabra2);

    return 0;
}