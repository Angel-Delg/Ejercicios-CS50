// Crea un programa C que encuentre el mayor de tres numero ingresados por el usuario
#include <stdio.h>
#include <cs50.h>

int main (void)
{

    int valor1, valor2, valor3;
    valor1 = get_int("Ingrese el primer digito: ");
    valor2 = get_int("Ingrese el segundo digito: ");
    valor3 = get_int("Ingrese el tercer digito: ");

    int numeros [3] = {valor1,valor2,valor3};

    int mayor;
    mayor = numeros[0];

    for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); ++i)
	{
		if (numeros[i] > mayor) mayor = numeros[i];
	}
	printf("El mayor es: %d \n\n", mayor);


    return 0;
}