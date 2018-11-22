#include <stdio.h>
#include <string.h>
#define LENGHT = 30;

void readSring(char *c1, char *c2);
void copyString(char *a, char *b);
void isEqual(char *, char *);
void showString(char *c1, char *c2, char *c3);
void stringLength(char *, char *, char *);
void concatStrings(char *, char *);

int main()
{
    char string1[LENGHT], string2[LENGHT], string3[LENGHT];

    readSring(string1, string2);
    copyString(string3, string1);
    concatStrings(string2, string1);
    
    return 0;
}

float calcuHipotenusa(float cato, float cata)
{
    float hipotenusa;

    hipotenusa = sqrt((cato * cato) + (cata * cata));

    return hipotenusa;
}

void mostrar(float hipotenusa1)
{
    printf("la hipotenusa es: %f \n", hipotenusa1);
}

float IngresarDato()
{
    float dato;
    printf("ingresar: \n");
    scanf("%F", &dato);
    return dato;
}
