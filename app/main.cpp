#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;
// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	leg_counter lc;
	while (true) {
		int num;
		std::cout << "Unesite ID zivotinje: ";
		std::cin >> num;

		if (!num) break;
		if (num > 3) {
			std::cout << "Krivi unos!" << std::endl;
			continue;
		}

		std::cout << "Vasa zivotinja je " << lc.add_animal(animal_factory(num).get()) << std::endl;
		
	
	}

	std::cout << "Ukupan broj nogu je: " << lc.legs() << std::endl;
}
