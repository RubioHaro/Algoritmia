#include <stdio.h>
#include <stdlib.h>

FILE *fd1, *fd2;

int main()
{
    char direccion1[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/03. AbrirYCerrarArchivos/file1.txt";
    char direccion2[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/03. AbrirYCerrarArchivos/file1.txt";

    fd1 = fopen(direccion1, "a+"); // w: write
    fd2 = fopen(direccion1, "a+"); // w: write

    if (fd1 == NULL || fd2 == NULL)
    {
        printf("No se han podido encontrar los archivos solicitados :c\n");
    }
    else
    {
        printf("Los archivos exsten\n");
    }

    fclose(fd1);
    fclose(fd2);

    return 0;
}
