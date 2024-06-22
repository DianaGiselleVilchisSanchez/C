#include <stdio.h>
#include <stdlib.h>
int main (){
    
    int n, i;
    int * buffer, * p_buffer;
    printf ("Teclea la longitud del arreglo");
    scanf ("%d", &n);

    buffer = (int*) malloc ((n)* sizeof(int));
    if (buffer==NULL) exit (1);
    p_buffer = buffer;

    for (i=0; i<n; i++){
        printf("Ingresa el valor de %d\n", i);
        scanf("%d", p_buffer++);
    }
    p_buffer=buffer;
    printf("\nLos valores son\n");
    for(n=0; n<i; n++){
    printf("arreglo [%d]=%d\n", n, *p_buffer++);
    }
    free (buffer);
    return 0;
}