#include "app.h"

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int aID;
	vsite::oop::v4::leg_counter lc;
	std::cout << "redni broj: " << "\n";
	std::cin >> aID;
	while (aID>0 && aID<4) {
		std::cout << lc.add_animal(vsite::oop::v4::animal_factory(aID).get()) << "\n";
		std::cout << "redni broj: " << "\n";
		std::cin >> aID;
	}

	std::cout << lc.legs();
}
