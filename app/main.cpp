#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int animalId = 0;
	std::cout << "Unesite redni broj zivotinje (1-3): \n";
	
	leg_counter lc;

	while (true)
	{
		std::cout << "Odabir: ";
		std::cin >> animalId;

		if (animalId < 1 || animalId > 3)
		{
			break;
		}

		std::cout << "Zivotinja: " << lc.add_animal(animal_factory(animalId).get()) << "\n";
	}
	std::cout << "Ukupan broj nogu: " << lc.legs() << "\n\n";
}
