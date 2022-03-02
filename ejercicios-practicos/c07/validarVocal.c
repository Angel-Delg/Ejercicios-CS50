// Crea un programa en C que valide si el caracter introducido por el usuario es una vocal o consonante
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main (void)
{
    char letra = get_char("\nIngrese una letra: ");
    letra = tolower(letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nEl caracter ingresado es una vocal :)\n");
    }else{
        printf("\nEl caracter ingresado es una consonante :)\n");
    }
    return 0;
}