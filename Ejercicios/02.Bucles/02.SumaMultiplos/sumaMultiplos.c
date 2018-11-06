#include <stdio.h>
#include <math.h>

float DisplayMenu()
{
    int dato;

    printf("1) Funcion con ciclo while (1) \n");
    printf("2) Funcion con ciclo do-while (1) \n");
    printf("3) Funcion con ciclo for (1) \n");
    printf("Elige una opción para realizar la suma de los números multiplos de 5 desde el 10 hasta el 100: ");
    scanf("%i", &dato);
    return dato;
}

int esMultiploDe(int num1, int num2)
{
    float rest;
    rest = num1 % num2;
    if (rest == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void WhileSum(int limInf, int limSup)
{

    int contador = limInf;
    int suma = 0;
    int multiplo = 5;

    printf("Los multiplos del %d al %d son: ", limInf, limSup);
    while (contador <= limSup)
    {
        int esMultiplo = esMultiploDe(contador, multiplo);
        if (esMultiplo == 1)
        {
            suma += contador;
            printf("%d ", contador);
        }
        contador++;
    }
    printf("\nLa suma es: %d \n", suma);
}

void DoWhileSum(int limInf, int limSup)
{

    int contador = limInf;
    int suma = 0;
    int multiplo = 5;

    printf("Los multiplos del %d al %d son: ", limInf, limSup);

    do
    {
        int esMultiplo = esMultiploDe(contador, multiplo);
        if (esMultiplo == 1)
        {
            suma += contador;
            printf("%d ", contador);
        }
        contador++;
    } while (contador <= limSup);
    printf("\nLa suma es: %d \n", suma);
}

void forSum(int limInf, int limSup)
{
    int suma = 0;
    int multiplo = 5;

    printf("Los multiplos del %d al %d son: ", limInf, limSup);

    for (int contador = limInf; contador <= limSup; contador++)
    {
        int esMultiplo = esMultiploDe(contador, multiplo);
        if (esMultiplo == 1)
        {
            suma = suma + contador;
            printf("%d ", contador);
        }
    }

    printf("\nLa suma es: %d \n", suma);
}

int main()
{
    int option;
    option = DisplayMenu();
    int limInf = 5, limSup = 10;
    switch (option)
    {
    case 1:
        WhileSum(limInf, limSup);
        break;
    case 2:
        DoWhileSum(limInf, limSup);
        break;
    case 3:
        forSum(limInf, limSup);
    default:
        break;
    }

    return 0;
}
