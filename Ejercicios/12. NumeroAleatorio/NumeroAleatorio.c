#include <stdio.h>
#include <time.h>

void display();

void runnable();

/* Programa básico obtener un número aleatorio. */
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
    printf("Programa básico obtener un número aleatorio. \n");
}

void runnable()
{
    char c;
    int number, limInf, limSup;
    int bucle = 1;
    srand(time(NULL));

    while (bucle == 1)
    {
        printf("Desea cambiar los limites (0-100)? y/n. \n");
        scanf("%c", &c);
        if (c == 'y' || c == 'Y')
        {
            printf("Ingrese el limite inferior:");
            scanf("%d", &limInf);

            printf("\nIngrese el limite superior:");
            scanf("%d", &limSup);

            bucle = 0;
            break;
        }
        else
        {
            if (c == 'n' || c == 'N')
            {

                limInf = 0;
                limSup = 100;
                bucle = 0;
                break;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        number = limInf + rand() % ((limSup + 1) - limInf);
        printf("Numero elegido %i: %i \n", (i + 1), number);
    }
}