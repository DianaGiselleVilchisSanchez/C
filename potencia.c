#include<stdio.h>

int main (void){
    int x, y, max;
    x=2;
    y=3;
    max = potencia (x,y);
    printf ("la potencia es %d", max);
    return 0;
}
int potencia (int a, int b){
    if (b < 1)
        return 1;
        return a * potencia (a, b-1);
}
