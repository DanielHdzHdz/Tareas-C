#include<stdio.h>
int main(void) {
    float base, altura, area;
    printf("Digita la altura del tiangulo \n");
    scanf("%f", &base);
    printf("Digite la base del triangulo \n");
    scanf("%f", &altura);
    area = (base * altura) / 2;


    printf("El area del triangulo es: %g \n", area);

//Programador: Daniel Hernandez Hernandez
//Programa: Area de triangulo
//Variables 3
//usuario ingresa 2 datos
//El programa hace la operacion del area
//Muestra los resultados
    return 0;
}
