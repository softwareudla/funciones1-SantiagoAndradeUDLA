/*
Una tienda desea implementar un programa en C que permita gestionar su inventario de productos. 
El programa debe recibir los nombres de los productos y sus precios, para luego realizar varias operaciones, tales como:

Calcular el precio total del inventario.
Encontrar el producto más caro y el más barato.
Calcular el precio promedio de todos los productos.
Buscar un producto por su nombre y mostrar su precio.
El número máximo de productos que el sistema debe manejar es 10.

Instrucciones:
Dividir el problema en partes pequeñas. Primero, analizar qué funciones se requieren y cómo organizar la información.
Utilizar archivos de cabeceras para separar las funciones del código principal.
Considerar múltiples soluciones antes de implementar el código. Hay varias formas de abordar este problema utilizando diferentes estructuras o enfoques con arreglos y funciones.
Proponer al menos dos alternativas de solución y discutir cuál de ellas es la más eficiente o adecuada según el contexto antes de iniciar la programación.
Requisitos:
Usar arreglos para almacenar los nombres y precios de los productos.
Definir funciones modulares para cada tarea (ingresar datos, cálculos, búsqueda).
Dividir el programa en varios archivos, separando las funciones del código principal.
No se deben utilizar estructuras ni punteros.
*/

//activar workflow

#include <stdio.h>
#include <string.h>
#include "funciones.h"

#define MAX_PRODUCTOS 10

int main() {
    char nombres[MAX_PRODUCTOS][50];
    float precios[MAX_PRODUCTOS];
    int num_productos = 0;
    int opcion;

    do {
        printf("\n---- Menú de Inventario ----\n");
        printf("1. Ingresar producto\n");
        printf("2. Mostrar total del inventario\n");
        printf("3. Producto más caro y más barato\n");
        printf("4. Precio promedio\n");
        printf("5. Buscar producto por nombre\n");
        printf("6. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                if (num_productos < MAX_PRODUCTOS) {
                    num_productos = ingresarProducto(nombres, precios, num_productos);
                } else {
                    printf("No se pueden ingresar más productos.\n");
                }
                break;
            case 2:
                mostrarTotal(precios, num_productos);
                break;
            case 3:
                mostrarExtremos(nombres, precios, num_productos);
                break;
            case 4:
                mostrarPromedio(precios, num_productos);
                break;
            case 5:
                buscarProducto(nombres, precios, num_productos);
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }
    } while (opcion != 6);

    return 0;
}
