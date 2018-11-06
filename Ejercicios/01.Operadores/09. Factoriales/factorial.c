#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para obtener el factorial de un número. \n");
}

void runnable()
{
    int numero;
    long int factorial = 1;
    printf("Digite el número para hallar el factorial:");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }

    printf("\n El factorial del numero dado es: %li \n", factorial);
}

/* Programa para obtener el factorial de un número. */
int main()
{
    display();
    runnable();
    return 0;
}
