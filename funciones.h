#ifndef FUNCIONES_H
#define FUNCIONES_H

int ingresarProducto(char nombres[][50], float precios[], int num_productos);
void mostrarTotal(float precios[], int num_productos);
void mostrarExtremos(char nombres[][50], float precios[], int num_productos);
void mostrarPromedio(float precios[], int num_productos);
void buscarProducto(char nombres[][50], float precios[], int num_productos);

#endif

// Funciones previamente en calculos.h
float calcularTotal(float precios[], int num_productos);
int encontrarMasCaro(float precios[], int num_productos);
int encontrarMasBarato(float precios[], int num_productos);
float calcularPromedio(float precios[], int num_productos);
