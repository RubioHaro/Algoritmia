#include <stdio.h>
#include <math.h>

float calcuHipotenusa(float cato, float cata)
{
    float hipotenusa;

    hipotenusa = sqrt((cato * cato) + (cata * cata));

    return hipotenusa;
}

void mostrar(float hipotenusa1)
{
    printf("la hipotenusa es: %f \n", hipotenusa1);
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
    float cata;
    float cato;
    float hipotenusa1;
    cata = IngresarDato("cateto adyacente");
    cato = IngresarDato("cateto opuesto");
    hipotenusa1 = calcuHipotenusa(cato, cata);
    mostrar(hipotenusa1);
    return 0;
}
