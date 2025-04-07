/*
 OPERADOR +:
		- usa como operador aritmetico: 5 + 6 = 10
		- como concatenador de string: "hola" + "pepe"



*/


#include <iostream>

int main() {

	// Declaracion e inicializacion de una varible
	int numero = 10;
	int puntoSumar;

	std::cout << "***** ANTES *****" << std::endl;
	std::cout << "numero: " << numero << std::endl;

	// expresion binaria de asignacion --> acumulacion de uno en uno
	numero = numero + 1;
	numero += 1;
	numero++;

	// mostrar el nuevo valor de numero
	std::cout << "***** DESPUES *****" << std::endl;
	std::cout << "numero: " << numero << std::endl;

	// Pedir al usuario que ingrese unos punto y acumularlo en la variable numero
	std::cout << "*************************************************" << std::endl;
	std::cout << "Ingrese los puntos que quiere sumar: ";
	std::cin >> puntoSumar;

	numero = numero + puntoSumar;

	// mostrar el valor con los puntos acumulados	
	std::cout << "numero con puntos: " << numero << std::endl;
	
	std::cout << "******************************" << std::endl;
	std::cout << "***** EJEMPLO OPERADOR + *****" << std::endl;
	std::cout << "******************************" << std::endl;

	// Declaro variables
	std::string texto;
	std::string entrada1;
	std::string entrada2;

	// pido las dos palabras
	std::cout << "Ingrese una palabra: ";
	std::cin >> entrada1;

	std::cout << "Ingrese otra palabra: ";
	std::cin >> entrada2;

	// concateno
	texto = entrada1 + " " + entrada2;

	// Muestro
	std::cout << texto << std::endl;

	return 0;
}