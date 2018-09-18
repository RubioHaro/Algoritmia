#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Calculadora de Rubio Haro \n");
    printf("************************** \n");
    printf("1) Suma \n");
    printf("2) Resta \n");
    printf("3) División \n");
    printf("4) Multiplicación \n");
    printf("************************** \n");
}

void Calculate(int option, int num1, int num2)
{
    int resultado;
    switch (option)
    {
    case 1:
        resultado = num1 + num2;
        printf("La operación %d + %d = %d \n", num1, num2, resultado);
        /* code */
        break;
    case 2:
        resultado = num1 - num2;
        printf("La operación %d - %d = %d \n", num1, num2, resultado);
        /* code */
        break;
    case 3:
        resultado = num1 / num2;
        printf("La operación %d / %d = %d \n", num1, num2, resultado);
        /* code */
        break;
    case 4:
        resultado = num1 * num2;
        printf("La operación %d * %d = %d \n", num1, num2, resultado);
        /* code */
        break;

    default:
        printf("\n No has ingresado una opcion valida:");
        putchar(option);
        break;
    }
}

int askContinue()
{
    printf("Deseas continuar operando? (1: para continuar, cuaquier otra para salir)");
    int c;
    scanf("%d", &c);
    return c;
}

void initCalculator()
{
    int option, num1, num2;
    display();
    printf("Elige una opcion \n");
    scanf("%d", &option);

    printf("\n");
    printf("ingresa el primer operador: ");
    scanf("%d", &num1);
    printf("ingresa el segundo operador: ");
    scanf("%d", &num2);
    Calculate(option, num1, num2);
}

int main()
{
    initCalculator();
    int c;
    while (c = 1)
    {
        initCalculator();
        c = askContinue();
    }
    /* code */
    return 0;
}
