#include <iostream>

int main() {

	std::cout << "***** DIVISION EXACTA - ENTEROS *****" << std::endl;
	
	// Declarar variables para la division exacta
	int numero1 = 10;
	int numero2 = 5;
	int divisionExacta;

	// Division numeros enteros (division exacta)
	divisionExacta = numero1 / numero2; // 2
	
	std::cout << "10 / 5 = " << divisionExacta << std::endl;

	std::cout << "***** DIVISION INEXACTA - ENTEROS *****" << std::endl;

	// Declaracion de variables para la division inexacta
	int numero3 = 10;
	int numero4 = 3;
	int divisionInexacta;
	int restoDivisionInexacta;

	// Division de numeros enteros (division Inexacta)
	divisionInexacta = numero3 / numero4; // 3
	restoDivisionInexacta = numero3 % numero4; // 1

	std::cout << "cociente: 10 / 3 = " << divisionInexacta << std::endl;
	std::cout << "resto: 10 % 3 = " << restoDivisionInexacta << std::endl;

	std::cout << "***** DIVISION INEXACTA - REALES *****" << std::endl;

	// Declaracion de variables para la division inexacta
	int numero5 = 10;
	int numero6 = 3;
	float divisionInexactaCasteo;	

	// Division de numeros enteros (division Inexacta) --> casteo de int a float
	divisionInexactaCasteo = (float)numero5 / numero6; // 3.33	

	std::cout << "10 / 3 = " << divisionInexactaCasteo << std::endl;
	

	std::cout << "***** DIVISION INEXACTA - REALES -  NUMEROS LITERALES *****" << std::endl;

	float divisionLiteral1 = 10.0 / 3; // 3.33
	float divisionLiteral2 = 10.0F / 3; // 3.33
	float divisionLiteral3 = (float)10 / 3; // 3.33

	std::cout << "metodo1: 10.0 / 3 = " << divisionLiteral1 << std::endl;
	std::cout << "metodo2: 10.0F / 3 = " << divisionLiteral2 << std::endl;
	std::cout << "metodo3: (float)10 / 3 = " << divisionLiteral3 << std::endl;

	return 0;
}