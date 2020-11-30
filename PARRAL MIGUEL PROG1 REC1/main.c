#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. Crear una función llamada calcularIVA que reciba como parámetro el precio bruto de un producto y
//devuelva el valor del impuesto (el IVA es 21%). Realizar la llamada desde main. *

//2. Crear una función que se llame reemplazarCaracter que reciba una cadena de
//caracteres como primer parámetro, como segundo parámetro el carácter a reemplazar y
// como tercero el nuevo carácter y devuelva la cantidad de veces que se reemplazo el carácter.
// int reemplazarCaracter(char [], char, char); *


//3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita
//ordenar un array de dicha estructura por marca. Ante igualdad de marca deberá
//ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

typedef struct
{
    int id;
    char procesador [20];
    char marca [25];
    float precio;
} notebook;

float calcularIva (float precio);
int reemplazarCaracter(char [], char, char);
void ordenarPc (notebook listanotes[]);

int main()
{
    float iva;
    int contador;
    float precio = 999.55;
    char cadena [20] = "sorpresa";

    notebook listaNotebooks [5] = {{1000, "quadcore", "Lenovo", 9000},
                                    {1001, "quadcore", "Lenovo", 15000},
                                    {1002, "dualcore", "Apple", 20000},
                                    {1003, "pentium 5", "Macbook", 9000},
                                    {1004, "dualcore", "HP", 9000}};

    iva = calcularIva(precio);
    printf("El iva es: %f\n", iva);

    contador = reemplazarCaracter(cadena,'s', 'n');
    printf("%d", contador);




    return 0;
}

float calcularIva (float precio)
{
    float impuesto;


    impuesto = precio * 0.21;


    return impuesto;

}

int reemplazarCaracter(char cadena [], char charViejo, char charNuevo)

{
   int len = strlen(cadena);
   int contador = 0;

   for (int i=0; i <len; i++)
   {
       if (cadena[i] == charViejo)
       {
           cadena[i] = charNuevo;
           contador++;
       }
   }
   return contador;

}

void ordenarPc (notebook listanotes[])
{
    notebook* aux;
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (strcpy(listanotes.marca[i], listanotes.marca [j]) < 0 ||
                strcpy(listanotes.marca[i], listanotes.marca [j]) == 0 && listanotes.precio [i] < listanotes.precio [j] )
                {
                    aux = listanotes [i];
                    listanotes [i] = listanotes[j];
                    listanotes [j] = aux;

                }

        }
    }

}
