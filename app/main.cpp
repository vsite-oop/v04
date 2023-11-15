#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	vsite::oop::v4::leg_counter lc;

	int animalId;
	do {
		std::cout << "Unesi ID zivotinje(1-zohar, 2-slavuj, 3-tarantula, 0-exit): ";
		std::cin >> animalId;

		if (animalId != 0) {
			std::unique_ptr<vsite::oop::v4::animal> newAnimal = vsite::oop::v4::animal_factory(animalId);

			if (newAnimal) {
				std::cout << "Species: " << lc.add_animal(newAnimal.get()) << std::endl;
			}
			else {
				std::cout << "Invalid ID zivotinje; unesi pravi ili 0" << std::endl;
			}
		}
	} while (animalId != 0);
	std::cout << "Ukupan broj nogu: " << lc.legs();
	return 0;
}
