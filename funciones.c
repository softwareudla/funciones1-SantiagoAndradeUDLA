#include <stdio.h>
#include <string.h>
#include "funciones.h"
#include "calculos.h"

int ingresarProducto(char nombres[][50], float precios[], int num_productos) {
    printf("Ingresa el nombre del producto: ");
    getchar();  // Limpiar el buffer?
    fgets(nombres[num_productos], 50, stdin);
    nombres[num_productos][strcspn(nombres[num_productos], "\n")] = '\0'; // Eliminar el salto de línea
    printf("Ingresa el precio del producto: ");
    scanf("%f", &precios[num_productos]);
    num_productos++;
    return num_productos;  // Devolver num_productos nuevo
}

void mostrarTotal(float precios[], int num_productos) {
    printf("Precio total del inventario: %.2f\n", calcularTotal(precios, num_productos));
}

void mostrarExtremos(char nombres[][50], float precios[], int num_productos) {
    int caro = encontrarMasCaro(precios, num_productos);
    int barato = encontrarMasBarato(precios, num_productos);
    printf("Producto más caro: %s con precio %.2f\n", nombres[caro], precios[caro]);
    printf("Producto más barato: %s con precio %.2f\n", nombres[barato], precios[barato]);
}

void mostrarPromedio(float precios[], int num_productos) {
    printf("Precio promedio: %.2f\n", calcularPromedio(precios, num_productos));
}

void buscarProducto(char nombres[][50], float precios[], int num_productos) {
    char busqueda[50];
    int encontrado = 0;

    printf("Ingresa el nombre del producto a buscar: ");
    getchar(); // Limpiar el buffer
    fgets(busqueda, 50, stdin);
    busqueda[strcspn(busqueda, "\n")] = '\0'; // Eliminar el salto de línea

    for (int i = 0; i < num_productos; i++) {
        if (strcmp(nombres[i], busqueda) == 0) {
            printf("Producto encontrado: %s con precio %.2f\n", nombres[i], precios[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}
