#include <stdio.h>

void IngresarEcuacion(char titulo[30], int ec[3])
{
    printf("%s", titulo);
    printf("\n A:");
    scanf("%i", &ec[0]);
    printf("\n B:");
    scanf("%i", &ec[1]);
    printf("\n C:");
    scanf("%i", &ec[2]);
    printf("La ecuacion es: %ix + %iy = %i \n", ec[0], ec[1], ec[2]);
}

void main()
{
    // 0:a, 1:b, 2:c
    int ec1 [3];
    // 0:d, 1:e, 2:f
    int ec2 [3];
    int x,y;
    printf("Calculadora de ecuaciones \n");
    IngresarEcuacion("Ingresa la primera ecuacion de l forma: Ax + By = C ", ec1);
    IngresarEcuacion("Ingresa la segunda ecuacion de l forma: Ax + By = C ", ec2);
    //
    x = -((ec1[2]*ec2[1])-(ec1[1]*ec2[2]))/((ec1[0]*ec2[1])-(ec1[1]*ec2[0]));
    printf("\n x = %d", x);
    y = -((ec1[0]*ec2[2])-(ec1[2]*ec2[0]))/((ec1[0]*ec2[1])-(ec1[1]*ec2[0]));
    printf("\n y = %d \n", y);
    
}
