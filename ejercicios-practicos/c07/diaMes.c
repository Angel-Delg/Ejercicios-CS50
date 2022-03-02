/*Crea un programa en C para imprimir los dias de un mes. utilizado switch*/
#include <stdio.h>
#include <cs50.h>

// Nota: Este programa solo valida los datos del año actual 2022 ...
int main (void)
{
    int mes = get_int("\n\tIngrese el numero de mes [1-12]: ");
    switch( mes ){
        // months with 31 days
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 :
            printf( "\n\tTiene 31 Dias\n\n");
        break;

        // months with 30 days
        case  4 :
        case  6 :
        case  9 :
        case 11 :
            printf( "\n\tTiene 30 Dias\n\n");
        break;

        case 2:
            printf("\n\tTiene 28 Dias\n\n");
        break;

        // Error Rejected...
        default: printf("\n\tThe month entered is incorrect !! :( \n\n");

    }


    // Nota: Solo se puede usar switch?, no podemos validar la entra de varias maneras ven te enseño :)

/*
    int anio = get_int("Ingrese el año del calendario: ");
    int mes = get_int("Ingrese el mes del año: ");

    if(mes == 2){
        (anio % 4 == 0 && anio % 100 != 0) ? printf("\n\tTiene 29 Dias\n\n") : printf("\n\tTiene 28 Dias\n\n");
    }
    if(mes != 2){
        (mes == 4 || mes == 6 || mes == 9 || mes == 11 ) ? printf("\n\tTiene 30 Dias\n\n") : printf( "\n\tTiene 31 Dias\n\n");
    }

*/
    return 0;
}