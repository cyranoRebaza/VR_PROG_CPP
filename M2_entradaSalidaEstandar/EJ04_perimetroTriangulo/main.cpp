/*
EJERCICIO 4:
Hacer un programa para calcular el perimetro de un triangulo y luego mostrarlo

*******************************************
MRP
*******************************************

1. IDENTIFICAR EL PROBLEMA:

	- Pide calcular el perimetro de un triangulo luego mostrarlo

2. ANALISIS DE LOS DATOS:

	- DE:

		- ladoTriangulo

	- DS:

		- perimetroTriangulo

	- PROCESO:

		- perimetroTriangulo = 3 * ladoTriangulo

3. ESTRATEGIA:

	- Pedir el lado del triangulo

	- calcular el perimetro

	- Mostrar el perimetro

4. ALGORITMO:

5. CODIFICACION:

*/

#include <iostream>

int main() {


	// Declarar las variables
	int ladoTriangulo, perimetroTriangulo;

	//- Pedir el lado del triangulo
	std::cout << "Ingrese el lado del Triangulo: ";
	std::cin >> ladoTriangulo;

	//- calcular el area y el perimetro
	perimetroTriangulo = 3 * ladoTriangulo;

	//- Mostrar el area y el perimetro
	std::cout << "*******************" << std::endl;	
	std::cout << "Perimetro: " << perimetroTriangulo << std::endl;


	return 0;
}