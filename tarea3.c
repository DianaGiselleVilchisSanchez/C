#include <stdio.h>

struct empleado {
    char nombre[100];
    char sexo[30];
    int sueldo;
};

int main(void) {
    struct empleado empleado;
    char nombre [100];
    char sexo[30];
    printf ("DATACIC \n");
   
    printf("Ingrese el nombre: ");
    scanf("%s", empleado.nombre);

    printf("Ingrese el sexo: ");
    scanf("%s", empleado.sexo);

    printf("Ingrese el sueldo: ");
    scanf("%d", &empleado.sueldo);


    printf("\nInformacion del empleado:\n");
    printf("Nombre: %s\n", empleado.nombre);
    printf("Sexo: %s\n", empleado.sexo);
    printf("Sueldo: %d\n", empleado.sueldo);

    return 0;
}