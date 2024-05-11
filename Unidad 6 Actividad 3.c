//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  10/05/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main() {
    int num1, num2, num3, sup;

    printf("Por favor, ingrese tres numeros (cada uno debe ser mayor que 3 y menor que 15):\n");


    printf("Ingrese el primer numero (4-14): \n");
    scanf("%d", &num1);
    if (num1 <= 3 || num1 >= 15) {
        printf("Error: numero fuera de los parametros establecidos.\n");
        return 1;
    }

    printf("Ingrese el segundo numero (4-14): \n");
    scanf("%d", &num2);
    if (num2 <= 3 || num2 >= 15) {
        printf("Error: el numero no es valido.\n");
        return 1;
    }

    printf("Ingrese el tercer numero (4-14): \n");
    scanf("%d", &num3);
    if (num3 <= 3 || num3 >= 15) {
        printf("Error: el numero no es valido.\n");
        return 1;
    }

    // Ordenar los números de mayor a menor
    if (num1 < num2) {
        sup = num1;
        num1 = num2;
        num2 = sup;
    }
    if (num1 < num3) {
        sup = num1;
        num1 = num3;
        num3 = sup;
    }
    if (num2 < num3) {
        sup = num2;
        num2 = num3;
        num3 = sup;
    }

    printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

    return 0;
    // Programador: Daniel Hernandez Hernandez
    // Fecha: 10/05/2024
    // Programa para ordenar tres numeros de mayor a menor que sean mayores que 3 y menores que 15
}