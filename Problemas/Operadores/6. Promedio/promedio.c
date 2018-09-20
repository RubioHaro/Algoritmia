#include <stdio.h>
#include <math.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para obtener el promedio de una cantidad determinada de numeros (reales)\n");
}

int SolicitarCantidadNumeros()
{
    int cantidad;
    printf("Ingresa la cantidad de numeros a promediar:");
    scanf("%d", &cantidad);
    return cantidad;
}

void runnable()
{
    int cantidad;
    cantidad = SolicitarCantidadNumeros();
    if (cantidad > 0 && cantidad < 1000)
    {
        float numeros[cantidad];
        float suma;
        for (int i = 0; i < cantidad; i++)
        {
            printf("\n ingresa el numero %i:", i+1);
            scanf("%f", &numeros[i]);
            suma += numeros[i];
        }
        printf("El promedio de los numeros es: %f \n", (suma/cantidad));
    }
    else
    {
        printf("se ha ingresado un formato erroneo, la cantidad de numeros debe de estar en un rango de 0 a 1000");
    }
}

int main()
{
    display();
    runnable();
    return 0;
}
