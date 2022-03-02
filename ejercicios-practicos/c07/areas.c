#include <stdio.h>
#include <cs50.h>
#include <math.h>

float calculateTriangleArea(float base, float height);
float calculateSquareArea(float sides);
float calculateCircleArea(float radius);

int main (void)
{

    int response;
    float base, height, radius, side;
    float resolve;

    do{
        printf("\t Calcular Areas\n");
        printf("1. Calcular area del triangulo.\n");
        printf("2. Calcular area del Cuadrado.\n");
        printf("3. Calcular area del circulo.\n");
        printf("4. Salir \n");

        // waiting for user response ...
        response = get_int("Ingrese una Opción: ");

        switch(response)
        {
            case 1 :
                base = get_float("Ingrese la base en CM: \n");
                height = get_float("Ingrese la altura en CM: \n");
                resolve = calculateTriangleArea( base,height );
                printf("EL area del tringulo es: %.2f centimetros cuadrados. \n\n\tGreat job :)\n\n", resolve);
            break;

            // Case two of the options...
            case 2 :
                side = get_float("Ingrese la distacia del lado en CM: \n");
                resolve = calculateSquareArea(side);
                printf("EL area del cuadrado es: %.2f centimetro cuadrados. \n\n\t Great job :)\n\n", resolve);
            break;

            // Case three of the options...
            case 3:
                radius = get_float("Ingrese el radio en CM: ");
                resolve = calculateCircleArea(radius);
                printf("EL area del circulo es: %.2f centimetros cuadrados. \n\n\t Great job :)\n\n", resolve);
            break;
        }

    }while(response != 4);
    return 0;
}

// calculate options
float calculateTriangleArea(float base, float height)
{
    return  (base * height) / 2 ;
}
float calculateSquareArea(float sides)
{
    return pow(sides, 2);
}
float calculateCircleArea(float radius)
{
    const float PI = 3.1416;
    return PI * pow( radius,2 );
}