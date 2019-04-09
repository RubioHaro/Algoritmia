#include <stdio.h>
#define TAM 15

//PROTOTIPOS
void entradadatos(int *A, int *x);
void calculo(int *A, int *x, float *r);
void salida(float *r);

int main()
{
	int A[TAM], x;
	float r;
	entradadatos(A, &x);
	calculo(A, &x, &r);
	salida(&r);
}

void entradadatos(int *A, int *x)
{
	printf("Cuantos datos va a evaluar\n");
	scanf("%d", x);
	for (int i = 0; i < (*x); i = i + 1)
	{
		printf("%d ", i);
		scanf("%d", &A[i]);
	}
}

void calculo(int *A, int *x, float *r)
{
	int p = 0;
	for (int i = 0; i < *x; i++)
	{
		p += A[i];
	}
	*r = p / (*x);
}

void salida(float *r)
{
	printf("Resultado: %f", *r);
}
