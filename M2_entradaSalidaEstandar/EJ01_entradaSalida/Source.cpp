/*
Ejercicio 01:
Hacer un programa que pida los nombres y las edades de dos personas luego los muestre por pantalla

********************************************
* MRP
********************************************
	
	1. IDENTIFICAR EL PROBLEMA:
		- Pedir los nombres y las edades de dos personas y mostrarlo por pantalla

	2. ANALISIS DE LOS DATOS
		
		DE:
			- nombre1, nombre2, edad1, edad2

		DS:
			- nombre1, nombre2, edad1, edad2

		PROCESO:
			
			-

	3. ESTRATEGIA
		
		- Pedir los nombres y las edades
		- Mostrar los nombres y las edades

	4. ALGORITMO

	5. CODIFICACION

		
*/

#include <iostream>

int main() {

	// Declarar las variables
	std::string nombre1, nombre2;
	int edad1, edad2;
	
	//- Pedir los nombres y las edades
	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre1;

	std::cout << "Ingrese su edad: ";
	std::cin >> edad1;

	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre2;

	std::cout << "Ingrese su edad: ";
	std::cin >> edad2;
	

	//- Mostrar los nombres y las edades
	std::cout << "*****************************" << std::endl;
	std::cout << "Persona1: " << std::endl;
	std::cout << "Nombre: "  << nombre1 << std::endl;
	std::cout << "Edad: "  << edad1 << std::endl;

	std::cout << "*****************************" << std::endl;
	std::cout << "Persona2: " << std::endl;
	std::cout << "Nombre: " << nombre2 << std::endl;
	std::cout << "Edad: " << edad2 << std::endl;


	return 0;
}