/*
EJEMPLO: hacer un programa que pida al usuario el radio de la circunferencia y que calcule y muestre el area y perimetro

***********************************************************
DE:
    - radio

DS: 
    - area, perimetro

PROCESO:

    - area = pi * r2
    - perimetro = 2 * pi * r


ESTRATEGIA:
    - Pedir el radio de la circunferencia
    - Calcular area y el perimetro
    - Mostrar el area y el perimetro

***********************************************************

CONSTANTE:
    - son iguales que las variables, pero al declararlas se inicializa con un valor que no cambia
    al largo del todo el programa


*/

#include <iostream>

int main() {

    // Declarar variables
    float radio;
    float perimetro, area;
    const float PI = 3.14;

    

    // Pido el radio de la circunferencia
    std::cout << "Ingrese el radio de la circunferencia: ";
    std::cin >> radio;

    // Calcular el area y el perimetro
    area = PI * radio * radio;
    
    perimetro = 2 * PI * radio;

    // Mostrar el area y el perimetro
    std::cout << "AREA     : " << area << std::endl;
    std::cout << "PERIMETRO: " << perimetro << std::endl;

    return 0;
}