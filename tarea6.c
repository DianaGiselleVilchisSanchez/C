#include <stdio.h>
#include <string.h>
#define atletass 10

struct Atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int numMedallas;
};

int main() {
    struct Atleta atletas[atletass];

    for (int i = 0; i < atletass; i++) {
        printf("Ingrese el deporte del atleta %d: ", i + 1);
        scanf("%s", atletas[i].deporte);
        printf("Ingrese el nombre del atleta %d: ", i + 1);
        scanf("%s", atletas[i].nombre);
        printf("Ingrese el país del atleta %d: ", i + 1);
        scanf("%s", atletas[i].pais);
        printf("Ingrese el número de medallas del atleta %d: ", i + 1);
        scanf("%d", &atletas[i].numMedallas);
    }

  
    int indiceMayorMedallas = 0;
    for (int i = 1; i < atletass; i++) {
        if (atletas[i].numMedallas > atletas[indiceMayorMedallas].numMedallas) {
            indiceMayorMedallas = i;
        }
    }

    printf("\nAtleta con el mayor número de medallas:\n");
    printf("Deporte: %s\n", atletas[indiceMayorMedallas].deporte);
    printf("Nombre: %s\n", atletas[indiceMayorMedallas].nombre);
    printf("País: %s\n", atletas[indiceMayorMedallas].pais);
    printf("Número de medallas: %d\n", atletas[indiceMayorMedallas].numMedallas);

    return 0;
}