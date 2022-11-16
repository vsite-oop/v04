#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
using namespace vsite::oop::v4;
int main()
{
	leg_counter lc;

	while (true) {
		std::cout << "Enter animal ID (0 to terminate): ";
		uint32_t id; std::cin >> id;
		if (id == 0) break;
		if (id > 3) {
			std::cout << "Please enter animal ID in range 1-3!\n";
			continue;
		}
		std::cout << "Species name: " << lc.add_animal(animal_factory(id).get()) << "\n";
	}
	std::cout << "Total leg count is: " << lc.legs();
}