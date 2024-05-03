//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  03/05/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main(void) {
    int n, a;

    printf("Ingrese un numero:\n");
    scanf("%d", &n);

    for(a = 1; a <= n; a++) {
        int resultado = a * (a + 1) * (2 * a + 1) / 6;
        printf("%d, ", resultado);
    }

    return 0;
    // Programador: Daniel Hernandez Hernandez
    // Fecha: 03/05/2024
    // Programa para generar una sucesion numerica apartir de una formula matematica
}
