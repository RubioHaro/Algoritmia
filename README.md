# Algoritmia

Programando en C.

## Ejercicios

### I. Operadores

1. Calculadora (operadores basicos: +,-,/,*)
2. Calculadora de Sisema de Ecuaciones (forma Ax + By = C)
3. Velocidad de una caida libre Vf = g * t
4. Fuerza de gravedad entre dos cuerpos, conociendo sus masas y la distancia entre ellos
5. Pendiente y la ordenada al origen de una recta de la forma f(x)= mx + b, conociendo dos de sus puntos.
6. Promedio de una cantidad determinada de numeros (reales)

### Por Rubio Haro Rodrigo Rodolfo

<https://github.com/RubioHaro>

### INSTITUTO POLITECNICO NACIONAL (IPN)

<https://www.ipn.mx/>

### ESCUELA SUPERIOR DE COMPUTO (ESCOM)

<https://www.escom.ipn.mx/>

## Librerias

Las librerias son fragmentos de codigo que nos permiten reutilizar codigo ya realizado. 
>
El formato para agregar una libreria en c, es:
`#include <stdio.h>`

## Variables

Es la posicion de memoria a la que le asignamos un valor, este valor puede cambiar. Si una variable esta dentro de una funcion se le llama "local", y si se puede usar en varias funciones se puede llamar "variable global".

## Constantes

Es la posicion de memoria a la que le asignamos un valor pero este valor no puede cambiar, a diferencia de las variables.
[ver diferencias con las Macros (define)].

## Tipos de datos en c

Existen diferentes tipos de datos:
>
    1. int (2 bytes, rango: -32768 a 32768)
    2. short (2 bytes, rango: -128 a 127)
    3. long (4 bytes)
    4. float (4 bytes)
    5. double (8 bytes)
    6. char (1 byte, rango: 0 a 255)

## Entradas

Son todos los datos que requiere el programa que sean ingresados por el o los usuarios para poder operar y/o funcionar.

Para recibir los datos ingresados por un usuario, se utiliza el comando:
`char[30] name; scanf("%s", name)`
La cuestión con este comando es que obtiene solo obtiene los caracteres hasta que encuentre un espacio en blanco. Otra alternativa es:
`char[30] name; gets(name)`

## Salidas

Son todos los datos mostrados por el programa.
>
Para imprimir, se utiliza el comando:
`printf("Hola mundo")`
>
Para imprimir algun dato, se utiliza el comando:
`printf("Hola mundo, mi nombre es: %c ", name)`
>
Para imprimir con varios datos, se utiliza el comando:
`printf("Hola mundo, mi nombre es: %c %c ", name, surname)`

## Operadores

Para realizar las operaciones basicas se usan los signos de comunes de operacion
>
Suma: `a = x + y`
>
Resta: `a = x - y`
>
Multiplicacion: `a = x * y`
>
Division: `a = x / y`
>

## Operadores de Asignacion

Son operaciones que abrevian determinadas operaciones.
Por ejemplo:
>
`a = a + 10` = `a += 10`
>
`a = a - 10` = `a -= 10`
>
`a = a * 10` = `a *= 10`
>
`a = a / 10` = `a /= 10`

