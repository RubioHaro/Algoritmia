#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para obtener el 15 porciento de descuento sobre una compra.\n");
}

float IngresarCompra(char titulo[30])
{
    float compra;
    printf("%s :", titulo);
    scanf("%f", &compra);
    return compra * 1.15;
}

void runnable()
{
    float pagar;
    pagar = IngresarCompra("Ingresa el total de la compra");
    printf("\n Total a pagar: %f \n", pagar);
}

/* Programa para obtener el 15 porciento de descuento sobre una compra. */
int main()
{
    display();
    runnable();
    return 0;
}
