#include "Czas.h"
#include <iostream>
#include <string>

Czas::Czas(int godz, int min, int sek)
{
	this -> godzina = godz;
	this -> minuta = min;
	this -> sekunda = sek;
}

std::string Czas::toString() const
{
	return std::to_string(godzina)+ ":" + std::to_string(minuta) + ":" + std::to_string(sekunda);
}



int main() 
{
	Czas time = Czas(12, 48, 8);
	std::cout<< time.toString();
	return 0;
}
