/* Ejercicio: imprimir los cuadrados y los cubos de los 
primeros quinientos numeros naturales
el cuadrado de un numero = x*x
El cubo de un numero = x*x*x
*/
#include <stdio.h>

int main (){
    int x = 1;
    while (x<=500){
        printf("%d,%d,%d", x, x*x, x*x*x);
        x++;
    }
    return 0;

}
