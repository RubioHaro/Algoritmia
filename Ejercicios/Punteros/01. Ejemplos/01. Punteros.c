#include <stdio.h>
#include <time.h>
#define true 1;
#define false 0;

void display();

void runnable();
void f1();
void Ejemplo1();
void Ejemplo2();
void Ejemplo3();

/* Programa básico obtener un número aleatorio. */
int main()
{
    display();
    runnable();
    return true;
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
    Ejemplo2();
}

void Ejemplo1()
{
    int i, j;
    int *p;
    p = &i; 
    *p = 5;
    j = (*p)++;
    printf("%d, %d \n", i, j);
}

void Ejemplo2()
{
    int i, j;
    i = 5;
    j = 7;
    f1(&i, j);
    printf("%d, %d \n", i, j);
}

void f1(int *i, int j)
{
    *i = 6; //antes 5
    j = 25; //antes 7
}

void Ejemplo3()
{
    int a, b;
    a = 5;
    b = 105;
    printf("%d, %d \n", a, b);
    proc(a, &b);
    printf("%d, %d \n", a, b);
}

void proc(int x, int *y)
{
    *y = *y + x;
    x *= 2;
    printf("%d, %d, %d", x, y, *y);
}
