#include "app.h"
#include<format>
#include<iostream>

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count

int main()
{
	int idNumber = 0;
	std::cout << "Unesite redni broj zivotinje (1-3): \n";

	leg_counter lc;

	while (true)
	{
		std::cout << "Odabir: ";
		std::cin >> idNumber;

		if (idNumber < 1 || idNumber > 3)
		{
			break;
		}

		std::cout << "Zivotinja: " << lc.add_animal(animal_factory(idNumber).get()) << std::endl;
	}
	std::cout << "Ukupan broj nogu: " << lc.legs() << std::endl;
}