#include <stdio.h>
int *p, y;
void func(){
    int x=40;
    p=&x;
    y=*p;
    *p=23;
}

int main (void){
    func();
    y=*p;
    *p=25;
    printf ("el valor de y es %d\n el valor de *p es de %d\n el valor de p es de %p", y, *p, p);
    
}
