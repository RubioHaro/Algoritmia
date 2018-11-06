#include <stdio.h>
#include <stdlib.h>

FILE *fd1;

int main()
{
    int c;
    char direccion1[] = "/home/rubio_rodrigo/Documents/Algoritmia/Algoritmia/Ejercicios/Archivos/05. LeerArchivo/file1.txt";

    fd1 = fopen(direccion1, "rt"); // r: read t: text, rt: read text

    if (fd1 == NULL)
    {
        printf("No se ha podido encontrar el archivo solicitado. Imposible leer :c\n");
        return 1;
    }
    else
    {
        while ((c = fgetc(fd1)) != '.')
        {
            if (c == '\n')
            {
                printf("\n");
            }
            else
            {
                putchar(c);
            }
        }
    }

    fclose(fd1);

    return 0;
}
