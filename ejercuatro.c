/*Escribir todos los enteros positivos menores que 100
omitiendo aquellos que son divisibles por 7
*/
#include <stdio.h>
int main(){
    int i = 1;
    printf("Resultado:\n");
    while(i < 100){
       if(i % 7 !=0) {
        printf("%d , ", i);
       }
       i++;
    }
    return 0;
}