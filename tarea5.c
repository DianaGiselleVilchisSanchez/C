#include <stdio.h>

struct Empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    struct Empleado empleados[5];

    printf("Ingrese la información de los empleados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", empleados[i].nombre);
        printf("Sexo (M/F): ");
        scanf(" %c", &empleados[i].sexo);
        printf("Sueldo: ");
        scanf("%f", &empleados[i].sueldo);
    }

    printf("\nInformación de los empleados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i + 1);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Sexo: %c\n", empleados[i].sexo);
        printf("Sueldo: %f\n", empleados[i].sueldo);
    }
    struct Empleado empleadoMenorSueldo = empleados[0];
    for (int i = 1; i < 5; i++) {
        if (empleados[i].sueldo < empleadoMenorSueldo.sueldo) {
            empleadoMenorSueldo = empleados[i];
        }
    }

    printf("\nEmpleado con el sueldo más bajo:\n");
    printf("Nombre: %s\n", empleadoMenorSueldo.nombre);
    printf("Sexo: %c\n", empleadoMenorSueldo.sexo);
    printf("Sueldo: %f\n", empleadoMenorSueldo.sueldo);

    return 0;
}