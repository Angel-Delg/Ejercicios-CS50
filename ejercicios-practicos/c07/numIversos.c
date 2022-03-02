// Crea un programa en C que reciba un número e imprima los números hasta el número ingresado, pero en el orden inverso
#include <stdio.h>
#include <cs50.h>

int main (void){

    int number = get_int("Ingrese un numero: ");
    while(number > 0 ){
        printf("%d\n",number--);
    }
    return 0;
}