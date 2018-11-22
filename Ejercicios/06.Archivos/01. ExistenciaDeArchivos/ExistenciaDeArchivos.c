#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
    //char direccion[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/01. ExistenciaDeArchivos/HolaMundo/holaMundo.txt";
    char direccion[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/01. ExistenciaDeArchivos/HolaMundo/asdasdas.txt";

    fd = fopen(direccion, "r"); // r: read
    if (fd == NULL)
    {
        printf("El archivo no existe\n");
    }
    else
    {
        printf("Se encontro el archivo");
        printf("\n Ubicacion: %s \n", direccion);
    }

    return 0;
}
