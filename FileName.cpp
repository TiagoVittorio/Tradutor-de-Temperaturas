#include <iostream>
#include <locale.h>; 

void main()

{
    double Temperatura, converter , escolher ;
    char Tipo;
    setlocale(LC_ALL, "Portuguese");
	std::cout << "Diz-me para converter em  C ou F";
    std::cin >> Tipo;

    switch (Tipo) {
    case 'C':
    case 'c':
        std::cout << "Meter a temperatura em Celsius: ";
        std::cin >> Temperatura;
        converter = (Temperatura * 9.0 / 5.0) + 32; 
        std::cout << "A temperatura em Fahrenheit é: " << converter;
        break;

    case 'F':
    case 'f':
      
        std::cout << "Meter  a temperatura em Fahrenheit: ";
        std::cin >> Temperatura;
   converter = (Temperatura - 32) * 5.0 / 9.0; 
        std::cout << "A temperatura em Celsius é: " << converter;
        break;

    default:
        std::cout << "Opção errada";
        break;
    }

	


}
