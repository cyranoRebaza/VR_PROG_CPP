/*
EJEMPLO: 
Calcular el area de un triangulo y mostrarlos

NOTA: Tener en cuenta el tipo de dato int y float

*************************************************
FORMULA AREA: (base * altura ) / 2

	- si declaro: 
		float base, altura, area  		
		
		---> area = (base * altura ) / 2
	
	- si declaro: 
		int base, altura
		float area  (double area: tendria el doble de precisión)                
		
		---> area = (float)(base * altura ) / 2  hice un CASTEO de int a float



*/

#include <iostream>

int main() {

	// Declarar las variables
	float base, altura, area;

	// Pido la base y la altura
	std::cout << "Ingrese la base del triangulo: ";
	std::cin >> base;

	std::cout << "Ingrese la altura del triangulo: ";
	std::cin >> altura;

	// Calcular el area
	area = (base * altura) / 2;

	// Mostrar el area
	std::cout << "El area del triangulo es: " << area << std::endl;

	return 0;
}
