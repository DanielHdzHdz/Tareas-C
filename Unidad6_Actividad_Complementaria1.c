//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  17/05/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main() {
    int opcion;

    printf("Bienvenido a nuestro servivio de comida. Por favor, seleccione un paquete:\n");
    printf("1. Paquete de orden de cinco tacos y un refresco\n");
    printf("2. Paquete de pizza con un refresco y postre\n");
    printf("3. Paquete de pollo rostizado con complementos\n");
    printf("4. Paquete de nachos con hotdogs\n");
    printf("Ingrese el numero de su eleccion:\n ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Has seleccionado el paquete de cinco tacos y un refresco.\n");
            break;
        case 2:
            printf("Has seleccionado el paquete de pizza con un refresco y postre.\n");
            break;
        case 3:
            printf("Has seleccionado el paquete de pollo rostizado con complementos.\n");
            break;
        case 4:
            printf("Has seleccionado el paquete de nachos con hotdogs.\n");
            break;
        default:
            printf("Ingrese una opcion valida.\n");
            break;
    }

    return 0;
    // Programador: Daniel Hernandez Hernandez
    // Fecha: 17/05/2024
    // Programa para seleccionar un paquete de comida con un switch
}