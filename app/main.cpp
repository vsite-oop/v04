#include<iostream>
#include "app.h"

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
/*
Napisite program koji koristeci te klase :

unosi sifre zivotinja (cijeli broj) dok se ne unese 0 i ispisuje naziv vrste svake zivotinje
na kraju ispise ukupan broj nogu zivotinja
*/
int main()
{
	int idAnimal = 0;
	leg_counter legCounter;

	std::cout << "Unesite redni broj zivotinje: " << std::endl;
	std::cout << "1. cockroach" << std::endl;
	std::cout << "2. sparrow" << std::endl;
	std::cout << "3. tarantula" << std::endl;
	for (;;) {
		std::cout << std::endl << "Dodaj zivotinju: ";
		std::cin >> idAnimal;
		if (idAnimal < 1 || idAnimal > 3) break;
		std::cout << "Dodana zivotinja: " << legCounter.add_animal(animal_factory(idAnimal).get()) << std::endl;
	}
	std::cout << "Ukupan broj nogu svih zivotinja je: " << legCounter.legs() << std::endl;
}
