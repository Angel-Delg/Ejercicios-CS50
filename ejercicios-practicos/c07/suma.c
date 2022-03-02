// Crea un programa en C que encuentre la suma entre 1 y n ,siendo n número ingresado por el usuario
#include <stdio.h>
#include <cs50.h>


int main (void)
{
    float nTermino = get_int("Ingrese el numero de la susecion: ");
    float resolve = 1 + nTermino;

    printf("\nResultado de la sucesion aritmetica: %.2f\n\n", (resolve / 2) * nTermino );

    // great job, thanks for see code!!
    return 0;
}