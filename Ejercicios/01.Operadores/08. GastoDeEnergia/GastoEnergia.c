#include <stdio.h>
#define tarifa1 1.2
#define tarifa2 1.0
#define tarifa3 0.9

void display()
{
    printf("************************** \n");
    printf("Rubio Haro Rodrigo R. \n");
    printf("************************** \n");
    printf("Programa para visualizar la tarifa de 'La luz' según el gasto de corriente eléctrica. \n");
    /*
        Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
        Para un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.OOOy 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.    
    */
}

void runnable()
{
    float gasto, tasa;
    printf("Digite el gasto total de energia:");
    scanf("%f", &gasto);

    if (gasto < 1000)
    {
        tasa = tarifa1;
    }

    if (gasto >= 1000 && gasto <= 1850)
    {
        tasa = tarifa2;
    }

    if (gasto > 1850)
    {
        tasa = tarifa3;
    }

    printf("\n la tasa a pagar es: %f \n", tasa);
}

/* Programa para visualizar la tarifa de 'La luz' según el gasto de corriente eléctrica. */
int main()
{
    display();
    runnable();
    return 0;
}
