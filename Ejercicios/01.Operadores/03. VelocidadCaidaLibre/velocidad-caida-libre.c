#include <stdio.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Calculadora de Velocidad Final (Vf) de un objeto en caida libre, que parte del reposo y cae durante (t) segundos */\n");
}


/* Programa para calcular la velocidad final (Vf) de un objeto en caida libre, que parte del reposo y cae durante (t) segundos */
int main()
{
    display();
    const float g = 9.81;
    float Vf, t;
    while (1 == 1)
    {
        printf("Ingrese el tiempo de caida (en segundos): \n ");
        scanf("%f", &t);
        Vf = g * t;
        printf("La velocidad es de : %f m/s \n", Vf);
    }
    return 0;
}
