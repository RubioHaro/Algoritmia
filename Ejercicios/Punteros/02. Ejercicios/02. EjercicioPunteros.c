#include <stdio.h>
void display();

void runnable();
void Ejercicio1();
void M();
int main()
{
    display();
    runnable();
    return 0;
}

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa ejemplo para uso de punteros. \n");
}

void runnable()
{
    Ejercicio1();
}

void Ejercicio1()
{
    int cont = 7;
    int index = 12;
    printf("%d, %d \n", cont, index);
    M(cont, &index);
    printf("%d %d \n", cont, index);
}

void M(int n1, int *n2)
{
    n1 = n1 + 100;
    *n2 += 100;
    printf("%d, %d, %d, %d \n", n1, n2, &n2, *n2);
}
