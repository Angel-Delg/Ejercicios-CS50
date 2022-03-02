/* Crea un programa en  C que imprima la tabla de multiplicar de un número ingresado por le usuario*/
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Capturamos el número de la tabla que vamos imprimir.
    int numTabla = get_int("Ingrese el numero de la tabla de multiplicar que desea ver: \n");

    for(int i = 1; i <= 14; i++){
        printf("%d x %d = %d\n", numTabla, i , numTabla * i);
    }
    printf("\n\tGreat Job :)\n\n");
    return 0;
}