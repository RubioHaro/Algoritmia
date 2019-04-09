#include <stdio.h>

void menu();
void datosentrada();
void eliminar();

int main()
{
  int arre[15];
  int tam;
  datosentrada(&arre, &tam);

  eliminar(&arre, tam);
  return 0;
}

void mostrar(int *arre, int num)
{
  for (int i = 0; i < num; i++)
  {
    printf("\n A(%d)= %d \n", i, arre[i]);
  }
}

void datosentrada(int *arre, int *tam)
{
  int n;
  printf("\nIngresa el numero de digitos que deseas ingresar menor a 15:\n");
  scanf("%d", &n);
  printf("\nIngresa los valores del arreglo:\n");
  for (int i = 0; i < n; i++)
  {
    printf("\n A(%d)=", i);
    scanf("%d", &arre[i]);
  }
  *tam = n;
}


int Buscar(int *arre, int aBuscar, int tam)
{
  int d;
  for (int i = 0; i < tam; i++)
  {
    if (arre[i] == aBuscar)
    {
      d = 1;
      break;
    }
    else
    {
      d = 0;
    }
  }
  return d;
}

void eliminar(int *arre, int tam)
{
  int arreB[tam];
  int cont = 0;
  // printf("El arreglo original\n");
  // mostrar(arre, 15);
  printf("El arreglo sin repetir\n");
  int condi;
  for (int i = 0; i < tam; i++)
  {
    condi = Buscar(arreB, arre[i], cont);
    if (condi != 1)
    { 
      arreB[cont] = arre[i];
      cont++;
    }
  }
  mostrar(arreB, cont);
}
