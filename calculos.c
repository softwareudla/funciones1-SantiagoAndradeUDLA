#include "calculos.h"

float calcularTotal(float precios[], int num_productos) {
    float total = 0;
    for (int i = 0; i < num_productos; i++) {
        total += precios[i];
    }
    return total;
}

int encontrarMasCaro(float precios[], int num_productos) {
    int indice = 0;
    for (int i = 1; i < num_productos; i++) {
        if (precios[i] > precios[indice]) {
            indice = i;
        }
    }
    return indice;
}

int encontrarMasBarato(float precios[], int num_productos) {
    int indice = 0;
    for (int i = 1; i < num_productos; i++) {
        if (precios[i] < precios[indice]) {
            indice = i;
        }
    }
    return indice;
}

float calcularPromedio(float precios[], int num_productos) {
    if (num_productos == 0) return 0;
    return calcularTotal(precios, num_productos) / num_productos;
}
