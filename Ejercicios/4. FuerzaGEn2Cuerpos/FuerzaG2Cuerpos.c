#include <stdio.h>
#include <math.h>

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Fuerza de gravedad entre dos cuerpos, conociendo sus masas y la distancia entre ellos \n");
}

float Calcular(float m1, float m2, float d)
{
    float F;
    const long double G = 0.0000000000667;
    F = (G * (m1 * 1000) * (m2 * 1000)) / (d * d);
    return F;
}

/* Programa para Obtener la fuerza de gravedad entre dos cuerpos, conociendo sus masas y la distancia entre ellos */
int main()
{
    display();

    float F, m1, m2, d;
    while (1 == 1)
    {
        printf("Ingrese la masa del primer cuerpo (en Toneladas): \n ");
        scanf("%f", &m1);
        printf("Ingrese la masa del segundo cuerpo (en Toneladas): \n ");
        scanf("%f", &m2);
        printf("Ingrese la distancia entre los dos cuerpos (en metros): \n ");
        scanf("%f", &d);
        F = Calcular(m1, m2, d);
        printf("La Fuerza es de : %f N \n", F);
        printf("**************************************************** \n");
    }
    return 0;
}
