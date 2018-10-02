#include <stdio.h>
#include <math.h>

float evalua_deri(float x)
{
    float result;

    result = (2/((3 * pow((2*x + 4),2/3))));

    return result;
}

void mostrar(float result)
{
    printf("la hipotenusa es: %f \n", result);
}

float IngresarDato()
{
    float dato;
    printf("ingresar: \n");
    scanf("%F", &dato);
    return dato;
}

int main()
{
    float x;
    float result;
    x = IngresarDato("variable");
    result= evalua_deri(x);
    mostrar(result);
    return 0;
}
