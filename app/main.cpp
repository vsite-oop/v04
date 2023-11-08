#include "app.h"

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int aID;
	vsite::oop::v4::leg_counter lc;
	while (true) {
		std::cout << "redni broj: " << "\n";
		std::cin >> aID;
		if (aID <= 0 || aID > 3) {
			break;
		}
		std::cout << lc.add_animal(vsite::oop::v4::animal_factory(aID).get()) << "\n";
	}

	std::cout << lc.legs();
}
