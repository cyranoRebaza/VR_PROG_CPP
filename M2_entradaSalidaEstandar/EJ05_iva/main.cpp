/*
EJERCICIO 05:
Hacer un programa para ingresar el precio de un producto sin iva luego calcular y mostrar el precio con iva del mismo

*******************************************
MRP
*******************************************

1. IDENTIFICAR EL PROBLEMA:

	- Pide calcular el precio de un producto con iva incluido luego mostrarlo

2. ANALISIS DE LOS DATOS:

	- DE:

		- precioSinIva

	- DS:

		- precioConIva

	- PROCESO:

		- porcentajeIva = 21
		- iva = precioSinIva * porcentajeIva / 100
		- precioConIva = precioSinIva + iva
		

3. ESTRATEGIA:

	- Pedir precio sin iva

	- calcular el iva y el precio con iva

	- Mostrar el precio con iva

4. ALGORITMO:

5. CODIFICACION:



*/

#include <iostream>

int main() {

	// Declarar las variables
	float precioSinIva, precioConIva, iva;
	const float PORCENTAJE_IVA = 21;
	
	//- Pedir precio sin iva
	std::cout << "Ingrese el precio sin Iva: $ ";
	std::cin >> precioSinIva;

	//- calcular el iva y precio con iva
	iva = precioSinIva * PORCENTAJE_IVA / 100;
	precioConIva = precioSinIva + iva;

	//- Mostrar el precio con iva
	std::cout << "**********************************" << std::endl;
	std::cout << "El precio con iva es: $ " << precioConIva << std::endl;

	return 0;
}