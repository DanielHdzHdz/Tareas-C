//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  05/04/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main() {
    int opcion; // codigo para para seleccionar la figura
    float base, altura, lado, baseMayor, baseMenor;

    printf("Selecciona la figura que deseas calcular el area:\n");
    printf("1. Triangulo\n");
    printf("2. Cuadrado\n");
    printf("3. Rectangulo\n");
    printf("4. trapecio\n");
    scanf("%d", &opcion);

    switch (opcion) {//seleccion de la figura
        case 1://triangulo
            printf("seleccionaste triangulo\n");
            printf("Ingresa la base:\n");
            scanf("%f", &base);
            printf("Ingresa la altura:\n");
            scanf("%f", &altura);
            printf("El area del triangulo es: %.2f\n", (base * altura) / 2);
            break;
        case 2://cuadrado
            printf("seleccionaste cuadrado\n");
            printf("Ingresa el lado:\n");
            scanf("%f", &lado);
            printf("El area del cuadrado es: %.2f\n", lado * lado);
            break;
        case 3://rectangulo
            printf("seleccionaste retangulo\n");
            printf("Ingresa la base:\n");
            scanf("%f", &base);
            printf("Ingresa la altura:\n");
            scanf("%f", &altura);
            printf("El area del rectangulo es: %.2f\n", base * altura);
            break;
        case 4://trapecio
            printf("seleccionaste trapecio\n");
            printf("Ingresa la base mayor:\n");
            scanf("%f", &baseMayor);
            printf("Ingresa la base menor:\n");
            scanf("%f", &baseMenor);
            printf("Ingresa la altura:\n");
            scanf("%f", &altura);
            printf("El area del trapecio es: %.2f\n", ((baseMayor + baseMenor) * altura) / 2);
            break;
        default:
            printf("Opcion no valida\n");

            getchar();
    }
    // Programador: Daniel Hernandez
    // Fecha de creacion: 05/04/2024
    //programa para calcular el area de un triangulo, cuadrado, rectangulo y trapecio

    return 0;
}