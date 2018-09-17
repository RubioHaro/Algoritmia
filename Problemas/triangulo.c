#include <stdio.h>

int IngresarEcuacion(char titulo[30])
{
    int ec[3];
    printf("%s", titulo);
    printf("\n A:");
    scanf("%i", &ec[0]);
    printf("\n B:");
    scanf("%i", &ec[1]);
    printf("\n C:");
    scanf("%i", &ec[2]);
    printf("La ecuacion es: %ix + %iy = %i \n", ec[0], ec[1], ec[2]);
    return *ec;
}

void main()
{
    // 0:a, 2:b, 3:c
    int ec1 [3];
    // 0:d, 2:e, 3:f
    int ec2 [3];
    int x,y;
    printf("Calculadora de ecuaciones \n");
    *ec1 = IngresarEcuacion("Ingresa la primera ecuacion de l forma: Ax + By = C ");
    *ec2 = IngresarEcuacion("Ingresa la segunda ecuacion de l forma: Ax + By = C ");
    printf("El sistema de ecuaciones es: \n");
    x = ((ec1[0]*ec2[2])-(ec1[2]*ec2[0]))/((ec1[3]*ec1[2])-(ec1[2]*ec2[3]));
    
    
    x = ((ec1[0]*ec2[3])-(ec1[3]*ec2[0]))/((ec1[0]*ec2[2])-(ec1[2]*ec2[3]));
    printf("x es iual a: %d", x);
}
