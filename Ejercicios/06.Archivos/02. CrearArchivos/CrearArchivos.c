#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
    char direccion[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/02. CrearArchivos/ArchivoCreado.txt";

    fd = fopen(direccion, "w"); // w: write
    if (fd == NULL)
    {
        printf("No se ha podido crear el archivo :c\n");
    }
    else
    {
        printf("Se creo el archivo");
        printf("\n Ubicacion: %s \n", direccion);
    }

    return 0;
}
