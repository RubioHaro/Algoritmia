#include <stdio.h>
#include <string.h>

#define N 3

void show(int arreglo[][N]);
void data(int arreglo[][N]);


void show(int arreglo[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d,", arreglo[i][j]);
        }
        printf("\n");
    }
}

void data(int arreglo[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\n Valor de [%d][%d]:", i,j);
            scanf("%d,", &arreglo[i][j]);
        }
    }
}

int main()
{
    int arreglo[N][N];
    data(arreglo);
    show(arreglo);
    return 0;
}
