/*
INFERENCIA DE TIPOS: 
	- Incorpodado desde C++ 11, se usa la palabra reserva auto
	- el mismo no puedo cambiar

*/

#include <iostream>

int main() {

	// Declarar variables
	std::string nombre1 = "pepe";
	int edad1 = 33;

	// muestro
	std::cout << "Tu nombre es " << nombre1 << " y tu edad es " << edad1 << std::endl;

	std::cout << "***********************************************" << std::endl;
	auto nombre2 = "toto";
	auto edad2 = 38;

	std::cout << "Tu nombre es " << nombre2 << " y tu edad es " << edad2 << std::endl;

	return 0;
}