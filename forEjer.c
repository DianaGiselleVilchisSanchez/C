#include <stdio.h>
int main (){
    int num=0;
    int i;
    int res;
    printf("Ingresa un numero");
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        printf("%d + " , i);
        res= num+i;
    }
    printf("=%d", res + num);
}