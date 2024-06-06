#include <stdio.h>

int main() {
    int m, n, i, j;

    
    printf("Ingrese el valor de filas");
    scanf("%d", &m);
    printf("Ingrese el valor de columnas");
    scanf("%d", &n);

    printf("\nTabla de Pitagoras de %dx%d:\n\n", m, n);
    for (i = 1; i <= m; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%d\t", i * j);
        }
        printf("\n"); 
    }

    return 0;
}