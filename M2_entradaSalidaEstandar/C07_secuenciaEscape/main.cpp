/*
SCAPE SEQUENCE
	- \' : comilla simple
	- \" : comilla dobles
	- \a : campana audible
	- \b : retroceso
	- \n : salto de linea - nueva linea
	- \t : tabulacion



*/

#include <iostream>

int main() {

	// Declarar cada variable
	char letra1, letra2, letra3, letra4;

	// pido cada letra
	std::cout << "Ingrese 4 letras: ";
	std::cin >> letra1;
	std::cin >> letra2;
	std::cin >> letra3;
	std::cin >> letra4;

	// Muestro cada letra
	std::cout << letra1 << std::endl;
	std::cout << letra2 << std::endl;
	std::cout << letra3 << std::endl;
	std::cout << letra4 << std::endl;

	std::cout << "**************************************" << std::endl;
	// barra inversa: para imprimir comillas
	std::string frase = "hola \"PEPE\"";

	std::cout << "frase con comillas: " << frase << std::endl;

	// barra invertida y n \n: salto de linea de la misma frase
	std::string frase2 = "hola pepe, \nes un placer conocerte";

	std::cout << "frase con salto de linea: " << frase2 << std::endl;

	std::cout << "**************************************" << std::endl;
	std::string nombre;

	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre;

	std::cout << "Tu nombre es: " << nombre << "\nes feo tu nombre ";


	return 0;
}