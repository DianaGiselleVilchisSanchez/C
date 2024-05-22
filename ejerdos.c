/* Imprimir todos los numeros divisibles
 entre 3 mayores a 0 y menores a mil
*/
#include <stdio.h>
int main (){
    printf("Numeros divisibles entre 3:\n");
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0) {
            printf("%d, ", i);
        }
    }
    return 0;
}