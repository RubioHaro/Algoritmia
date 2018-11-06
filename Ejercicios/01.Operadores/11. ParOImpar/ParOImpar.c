#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa básico para saber si un número es impar haciendo uso del operador (?). \n");
}

void runnable()
{
    int number;
    printf("Ingrese un número: ");
    scanf("%i", &number);
    (number % 2 == 0) ? printf("El número es par \n"): printf("El número es impar \n");
}

/* para saber si un número es impar haciendo uso del operador (?). */
int main()
{
    display();
    runnable();
    return 0;
}