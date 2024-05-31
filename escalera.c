#include <stdio.h>
int main (){
    int num, i, j;
    printf("ingresa un numero\n");
    scanf("%d", &num);

    printf("primer escalera");
    for(i=0; i<=num; ++i){
        for (j=1; j<=1; ++j){
            printf("*");
        }
        printf("\n");
    }
    printf ("segunda escalera");
    for(i=num; i>=1; i--){
        for (j=1; j<=i; j++){
            printf("*");
        }
            printf("\n");
    }
    return 0;
}