#include <iostream>;

#include "app.h"

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	uint32_t animalID = 0;
	vsite::oop::v4::leg_counter legCounter;

	std::cout << "Input animal ID:\n  1. Cockroach\n  2. Sparrow\n  3. Tarantula\n\n  0. Exit\n\n";


	while (true)
	{
		std::cout << "Animal: ";
		std::cin >> animalID;
		if (!animalID) 
			break;

		auto newAnimal = vsite::oop::v4::animal_factory(animalID);
		std::cout << animalID << ". " << newAnimal->species() << '\n';
		legCounter.add_animal(newAnimal.get());
	}

	std::cout << "Total number of legs: " << legCounter.legs();
}
