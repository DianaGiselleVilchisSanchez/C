#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int len;
    char palabra1[100];
    char palabra2[100];
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);
    
    len = strlen(palabra1);
    for (i=0; i<len; ++i) {
        strcat(palabra1, palabra2);
    }
    printf("Palabra 1: %s\n", palabra1);
    return 0;
}