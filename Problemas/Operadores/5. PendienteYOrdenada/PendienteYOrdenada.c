#include <stdio.h>
#include <math.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para obtener la pendiente y la ordenada al origen de una recta de la forma f(x)= mx + b \n");
}

void IngresarPunto(char titulo[30], int punto[2])
{
    printf("%s", titulo);
    printf("\n x:");
    scanf("%i", &punto[0]);
    printf("\n y:");
    scanf("%i", &punto[1]);
    printf("El punto es: (%i , %i) \n", punto[0], punto[1]);
}

int CalcularPendiente(int punto1[2], int punto2[2])
{
    return (punto1[1] - punto2[1]) / (punto1[0] - punto2[0]);
}

int CalcularOrdenada(int punto[2], int pendiente)
{
    return (pendiente * punto[0]) - punto[1];
}

int ImprimirPendiente(int punto1[2], int punto2[2])
{
    int pendiente;
    pendiente = CalcularPendiente(punto1, punto2);
    printf("****************** \n");
    printf("    (%i - %i)\n", punto1[1], punto2[1]);
    printf("m = --------- = %i  //\n", pendiente);
    printf("    (%i - %i)\n", punto1[0], punto2[0]);
    printf("****************** \n");
    return pendiente;
}

int ImprimirOrdenada(int punto[2], int pendiente)
{
    int ordenada;
    ordenada = CalcularOrdenada(punto, pendiente);
    printf("****************** \n");
    printf("f(x) = mx + b\n");
    printf("b = mx - f(x)\n");
    printf("b = (%i)(%i) - (%i)\n", pendiente, punto[0], punto[1]);
    printf("\nb = %i //\n", ordenada);
    printf("****************** \n");
    return ordenada;
}

void runnable()
{
    int punto1[2];
    int punto2[2];
    int pendiente, ordenada;
    IngresarPunto("Ingresa el primer punto", punto1);
    IngresarPunto("Ingresa el segundo punto", punto2);
    pendiente = ImprimirPendiente(punto1, punto2);
    ordenada = ImprimirOrdenada(punto1, pendiente);
    printf("Pendiente, m = %i    |   Ordenada, b = %i \n", pendiente, ordenada);
}

/* Programa para obtener la pendiente y la ordenada al origen de una recta de la forma f(x)= mx + b */
int main()
{
    display();
    runnable();
    return 0;
}
