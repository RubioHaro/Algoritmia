#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para obtener la sucesión de fibonacci. \n");
}

void runnable()
{
    int numero;
    long int factorial = 1;
    int x = 0, y = 1, z = 1;
    printf("Digite el número de elementos a mostrar:");
    scanf("%d", &numero);
    printf("%i, ", z);
    for (int i = 1; i < numero; i++)
    {
        z = x + y;
        x = y;
        y = z;
        printf("%i, ", z);
    }
}

/* Programa para obtener n digitos de la sucesion de fibonacci de un número. */
int main()
{
    display();
    runnable();
    return 0;
}
