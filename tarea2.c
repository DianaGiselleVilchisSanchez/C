#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int letras[26]; 
    
    printf("Ingrese una palabra: ");
    scanf("%s", palabra); 
    
    for(int i = 0; i < strlen(palabra); i++) {
        
        if(palabra[i] >= 'A' && palabra[i] <= 'Z') {
            palabra[i] += 'a' - 'A';
        }
    
        if(palabra[i] >= 'a' && palabra[i] <= 'z') {
            letras[palabra[i] - 'a']++;
        }
    }
    printf("Ocurrencias de cada letra en la palabra:\n");
    for(int i = 0; i < 26; i++) {
        if(letras[i] > 0) {
            printf("%c = %d\n", 'a' + i, letras[i]);
        }
    }
    return 0;
}