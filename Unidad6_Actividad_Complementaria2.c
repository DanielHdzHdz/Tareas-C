//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  17/05/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main() {
    int n, i, suma = 0;

    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: El numero ingresado debe ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        suma = i + i;
        printf("Para n = %d, Suma = %d.\n", i, suma);
    }

    return 0;
// Programador: Daniel Hernandez Hernandez
// Fecha: 17/05/2024
// Programa para calcular la suma de los primeros n numeros enteros positivos
}