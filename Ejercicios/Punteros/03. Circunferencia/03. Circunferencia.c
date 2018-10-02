#include <stdio.h>
#include <math.h>
void display();

void runnable();

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa obtener el radio y las coordenadas del centro de una circunferencia dada su ecuación. \n");
}

void calcularRadio(float ecuacion[5], float *radio)
{
    *radio = sqrt(pow(ecuacion[3] / 2, 2) + pow(ecuacion[4] / 2, 2) - ecuacion[4]);
}

void calcularCentro(float ecuacion[5], float centro[2])
{
    centro[0] = -ecuacion[3] / 2;
    centro[1] = -ecuacion[4] / 2;
}

void EcuacionCircunferencia()
{
    printf("Ingresar los valores de la ecuacion de la circunferencias de la forma: Ax² + Bx² + Cx + Dy + E \n");
    float ecuacion[5];
    char des_eq[5];

    float radio;
    float punto[2];

    des_eq[0] = 'A';
    des_eq[1] = 'B';
    des_eq[2] = 'C';
    des_eq[3] = 'D';
    des_eq[4] = 'E';

    for (int i = 0; i <= 4; i++)
    {
        printf("\n Ingresar el termino %c: ", des_eq[i]);
        scanf("%f", &ecuacion[i]);
    }

    calcularRadio(ecuacion, &radio);
    printf("\nRadio: r = %f", radio);
    calcularCentro(ecuacion, punto);
    printf("\nCentro: C(%f, %f)\n", punto[0], punto[1]);
}

void runnable()
{
    EcuacionCircunferencia();
}


int main()
{
    display();
    runnable();
    return 0;
}