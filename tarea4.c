#include <stdio.h>

struct atleta{
    char deporte [20];
    char nombre[20];
    char pais [20];
    int numMedallas;
};

int main(void){
    struct atleta dat;
    printf("Ingrese el deporte: ");
    scanf("%s", dat.deporte);

    printf("Ingrese el nombre: ");
    scanf("%s", dat.nombre);

    printf("Ingrese el pais: ");
    scanf("%s", dat.pais);

    printf("Ingrese el numero de medallas: ");
    scanf("%d", &dat.numMedallas);

    printf("\nInformacion del empleado:\n");
    printf("Deporte: %s\n", dat.deporte);
    printf("Nombre: %s\n", dat.nombre);
    printf("Pais: %s\n", dat.pais);
    printf("Numero de medallas: %d\n", dat.numMedallas);

    return 0;    
}