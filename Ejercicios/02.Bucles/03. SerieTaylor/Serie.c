#include <stdio.h>
#include <math.h>

void display()
{
    printf("****************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("Romero Barrientos Jonathan R.\n");
    printf("****************************** \n");
    printf("Programa básico de ejemplo de un do while \n");
}

void runnable()
{
    int X, M;
    M = InputM();
    X = InputX();
    printf("*******************************\n");
    printf("Datos ingresados:\n");
    printf("X: (%d)\n", X);
    printf("M: (%d)\n", M);
    calculate(X, M);
    printf("*******************************\n");
}

void calculate(int X, int M)
{

    float resultadoSerie, resultadoFinal;
    int contador;

    resultadoSerie = 0;
    int c = 0;

    contador = 1;
    for (int i = 3; contador < M; i + 2)
    {
        int resPow = pow(X, i);
        float operation; 
        operation = (resPow) / (getFactorial(X));
        if (c == 1)
        {

            resultadoSerie += operation;
            c = 0;
        }
        else
        {
            resultadoSerie -= operation;
            c = 1;
        }
        contador++;
    }
    resultadoFinal = X + resultadoSerie;
    printf("Resultado: (%f)\n", resultadoFinal);
}

getFactorial(int numero)
{
    int long factorial = 1;
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int InputM()
{
    int base;

    do
    {
        printf("Ingrese la cantidad de terminos \n");
        scanf("%d", &base);
        if (base >= 0 && base <= 999999)
        {
            return base;
        }
        else
        {
            printf("Estas pendejo >:v \n");
        }
    } while (base < 0 || base > 999999);
}

int InputX()
{
    int X;

    printf("Ingrese el entero \n");
    scanf("%d", &X);
    return X;
}

/* para saber si un número es impar haciendo uso del operador (?). */
int main()
{
    display();
    runnable();
    return 0;
}