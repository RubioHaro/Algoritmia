#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa básico de ejemplo de un do while \n");
}

void runnable()
{
    int number = 1;
    do
    {
        printf("%d \n", number);
        number ++;
    } while (number <= 5);

}

/* para saber si un número es impar haciendo uso del operador (?). */
int main()
{
    display();
    runnable();
    return 0;
}