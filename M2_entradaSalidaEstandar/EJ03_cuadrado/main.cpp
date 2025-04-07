/*
EJERCICIO 3:
Hacer un programa para calcular el area y perimetro de un cuadrado y luego mostrarlo

*******************************************
MRP
*******************************************

1. IDENTIFICAR EL PROBLEMA:

	- Pide calcular el area y perimetro de un cuadrado luego mostrarlo

2. ANALISIS DE LOS DATOS:

	- DE:

		- lado

	- DS:

		- area, perimetro

	- PROCESO:

		- area = lado * lado
		- perimetro = 4 * lado

3. ESTRATEGIA:

	- Pedir el lado del cuadrado

	- calcular el area y el perimetro

	- Mostrar el area y el perimetro

4. ALGORITMO:

5. CODIFICACION:

*/

#include <iostream>

int main() {

	
	// Declarar las variables
	int lado, area, perimetro;

	//- Pedir el lado del cuadrado
	std::cout << "Ingrese el lado del cuadrado: ";
	std::cin >> lado;

	//- calcular el area y el perimetro
	area = lado * lado;
	perimetro = 4 * lado;

	//- Mostrar el area y el perimetro
	std::cout << "*******************" << std::endl;
	std::cout << "Area     : " << area << std::endl;
	std::cout << "Perimetro: " << perimetro << std::endl;


	return 0;
}