#include <iostream>

int main() {

	// Declarar las variables
	std::string nombre;
	int edad;

	// Pedir que ingrese su nombre
	std::cout << "Ingresa tu nombre: ";
	std::cin >> nombre;

	// Pedir que ingrese su edad
	std::cout << "Ingrese su edad: ";
	std::cin >> edad;

	// mostrar el nombre ingresado y la edad
	std::cout << "hola " << nombre << std::endl;
	std::cout << "tu edad es " << edad << " anios" << std::endl;

	return 0;
}