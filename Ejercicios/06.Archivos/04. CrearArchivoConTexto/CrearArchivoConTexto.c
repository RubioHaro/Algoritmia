//CrearArchivoConTexto

#include <stdio.h>
#include <stdlib.h>

FILE *fd1;

int main()
{
    int c;
    char direccion1[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/04. CrearArchivoConTexto/file1.txt";

    fd1 = fopen(direccion1, "wt"); // w: write t: text, wt: write text

    if (fd1 == NULL)
    {
        printf("Error al crear el archivo :c\n");
        return 1;
    }

    while ((c = getchar()) != '.')
    {
        fputc(c, fd1);
    }

    fclose(fd1);

    return 0;
}
