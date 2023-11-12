#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int animalId = 0;

	leg_counter lc;

	while (true)
	{
		std::cout << "Odaberite zivinu 1-3 ili 0 za izlaz: ";
		std::cin >> animalId;

		if (animalId < 1 || animalId > 3)
		{
			break;
		}

		std::cout << "odabrali ste: " << lc.add_animal(animal_factory(animalId).get()) << "\n";
	}
	std::cout << "suma nogu svih zivina jest: " << lc.legs() << "\n\n";
}
