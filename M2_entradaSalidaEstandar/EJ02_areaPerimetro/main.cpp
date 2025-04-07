/*
EJERCICIO 2: 
Hacer un programa para calcular el area y perimetro de un rectangulo y luego mostrarlo

*******************************************
MRP
*******************************************

1. IDENTIFICAR EL PROBLEMA:

	- Pide calcular el area y perimetro de un rectangulo luego mostrarlo

2. ANALISIS DE LOS DATOS:

	- DE:
		
		- largo, ancho

	- DS:
		
		- area, perimetro

	- PROCESO:

		- area = largo * ancho
		- perimetro = 2 * (largo + ancho)

3. ESTRATEGIA:

	- Pedir el largo y el ancho

	- calcular el area y el perimetro

	- Mostrar el area y el perimetro

4. ALGORITMO:

5. CODIFICACION:

*/

#include <iostream>

int main() {

	// Declarar las variables
	int largo, ancho, area, perimetro;
	
	//- Pedir el largo y el ancho
	std::cout << "Ingrese el largo: ";
	std::cin >> largo;

	std::cout << "Ingrese el ancho: ";
	std::cin >> ancho;

	//- calcular el area y el perimetro
	area = largo * ancho;
	perimetro = 2 * (largo + ancho);

	//- Mostrar el area y el perimetro
	std::cout << "*******************" << std::endl;
	std::cout << "Area     : " << area << std::endl;
	std::cout << "Perimetro: " << perimetro << std::endl;

	return 0;
}