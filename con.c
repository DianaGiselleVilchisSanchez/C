#include <stdio.h>
#include <time.h>

int main() {
    int arreglo[20];
    int *ptr = arreglo; 
    int i = 0;
    clock_t t0 = clock();

    while (i < 20) {
        *(ptr + i) = 20 - i;
        i++;
    }

    ptr = arreglo; 
    i = 0;

    while (i < 20) {
        printf("%d ", *(ptr + i));
        i++;
    }
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", time);
    return 0;
}