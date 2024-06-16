
#include <stdio.h>
int factorial(int numero);

int main (){
    int numero, i, conta = 1;
    puts("Ingresa un numero.");
    scanf("%d", &numero);

    while (conta < numero)
    {
        for (i = 1; i <= numero; i++){
        printf("%d! es: %d\n", conta, factorial(i));
        conta++;
        }
    }
    
    return 0;
}

int factorial(int numero){
    if (numero <= 1)
    {
        return 1;
    } else {
        return (numero * (factorial(numero-1)));
    }
    
}