#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
using namespace vsite::oop::v4;
int main()
{
	leg_counter lc;
	uint32_t id = 1;

	while (id) {
		std::cout << "Enter animal ID (0 to terminate): ";
		std::cin >> id;
		if (id == 0) break;
		lc.add_animal(animal_factory(id).get());
		std::cout << "Species name: " << animal_factory(id).get()->species() << "\n";
	}
	std::cout << "Total leg count is: " << lc.legs();
}