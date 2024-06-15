#include <stdio.h>

int maximo (int num1, int num2);

int main() {
    int numero, num1, num2;
    numero =maximo (num1,num2);
    printf("El numero mayor es: %d", numero);
    printf("\n");
    return 0;


}
int maximo (int num1, int num2){
    puts("Ingrese un numero");
    scanf("%d", &num1);
    puts("Igrese otro numero");
    scanf("%d", &num2);

    if(num1 > num2){
        return num1;

    }else{
        return num2;
    }


}