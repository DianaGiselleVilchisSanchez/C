#include <stdio.h>
#include <string.h>

int main() {
    char palabra[10];
    int len;
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    
    len = strlen(palabra);

    printf("La longitud de la palabra es: %d\n ", len);
    return 0;
}