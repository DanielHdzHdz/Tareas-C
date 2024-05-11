//Universidas Atonoma Nacional de Mexico
//FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN
//INFORMÁTICA A DISTANCIA
// Programa creado por Daniel Hernandez Hernandez el  10/05/2024.
//Asignatura: 2125-Diseño de algoritmos
//Docente: Juan Manuel Martínez Fernández
#include <stdio.h>

int main() {
    int mes, dia;

    printf("Ingrese su mes de nacimiento (1-12): \n");
    scanf("%d", &mes);

    printf("Ingrese su dia de nacimiento (1-31): \n");
    scanf("%d", &dia);

    switch (mes) {
        case 1:
            if (dia < 20) {
                printf("Tu signo zodiacal es Capricornio.\n");
            } else {
                printf("Tu signo zodiacal es Acuario.\n");
            }
            break;
        case 2:
            if (dia < 19) {
                printf("Tu signo zodiacal es Acuario.\n");
            } else {
                printf("Tu signo zodiacal es Piscis.\n");
            }
            break;
        case 3:
            if (dia < 21) {
                printf("Tu signo zodiacal es Piscis.\n");
            } else {
                printf("Tu signo zodiacal es Aries.\n");
            }
            break;
        case 4:
            if (dia < 20) {
                printf("Tu signo zodiacal es Aries.\n");
            } else {
                printf("Tu signo zodiacal es Tauro.\n");
            }
            break;
        case 5:
            if (dia < 21) {
                printf("Tu signo zodiacal es Tauro.\n");
            } else {
                printf("Tu signo zodiacal es Geminis.\n");
            }
            break;
        case 6:
            if (dia < 21) {
                printf("Tu signo zodiacal es Geminis.\n");
            } else {
                printf("Tu signo zodiacal es Cancer.\n");
            }
            break;
        case 7:
            if (dia < 23) {
                printf("Tu signo zodiacal es Cancer.\n");
            } else {
                printf("Tu signo zodiacal es Leo.\n");
            }
            break;
        case 8:
            if (dia < 23) {
                printf("Tu signo zodiacal es Leo.\n");
            } else {
                printf("Tu signo zodiacal es Virgo.\n");
            }
            break;
        case 9:
            if (dia < 23) {
                printf("Tu signo zodiacal es Virgo.\n");
            } else {
                printf("Tu signo zodiacal es Libra.\n");
            }
            break;
        case 10:
            if (dia < 23) {
                printf("Tu signo zodiacal es Libra.\n");
            } else {
                printf("Tu signo zodiacal es Escorpio.\n");
            }
            break;
        case 11:
            if (dia < 22) {
                printf("Tu signo zodiacal es Escorpio.\n");
            } else {
                printf("Tu signo zodiacal es Sagitario.\n");
            }
            break;
        case 12:
            if (dia < 22) {
                printf("Tu signo zodiacal es Sagitario.\n");
            } else {
                printf("Tu signo zodiacal es Capricornio.\n");
            }
            break;
        default:
            printf("Mes no valido.\n");
            break;
    }

    return 0;
    // Programador: Daniel Hernandez Hernandez
    // Fecha: 10/05/2024
    // Programa para determinar el signo zodiacal de una persona
}
