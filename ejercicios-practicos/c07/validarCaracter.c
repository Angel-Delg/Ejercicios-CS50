// Crea un programa en C para verificar caracteres alfabeticos usando operador condicional
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

// Usando la funcion isalpha podemos verificar su dato nota: esta en el manual de cs50

int main (void)
{
    char caracter = get_char("\n\tIngrese un caracter para verificar si es alfabetico: ");
    (isalpha(caracter) != 0) ? printf("\n\tEs caracter alfabetico :)\n") : printf("\n\tNo es caracter alfabetico :(\n");
    return 0;
}

