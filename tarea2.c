#include <stdio.h>

struct CD {
    char titulo [100];
    char artista [50];
    int numcanciones;
    int anio;
    int precio;
};

int main(void) {
    struct CD cd1;
    char titulo;
    char artista;
    int numcanciones;
    int anio;
    int precio;

    printf("Ingresa el título del CD: ");
    scanf("%s", cd1.titulo);

    printf("Ingresa el artista del CD: ");
    scanf("%s", cd1.artista);

    printf("Ingresa el número de canciones: ");
    scanf("%d", &cd1.numcanciones);

    printf("Ingresa el año del CD: ");
    scanf("%d", &cd1.anio);

    printf("Ingresa el precio: ");
    scanf("%d", &cd1.precio);

    printf("\n");
    printf("datos:\n");
    printf("Título: %s", cd1.titulo);
    printf("\n");
    printf("Artista: %s\n", cd1.artista);
    printf("Número de canciones: %d\n", cd1.numcanciones);
    printf("Año: %d\n", cd1.anio);
    printf("Precio: %d\n", cd1.precio);
    return 0;
}