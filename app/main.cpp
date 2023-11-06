#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;
// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int lc = 0;
	while (1) {
		int num;
		std::cout << "Unesite ID zivotinje: ";
		std::cin >> num;

		if (!num) break;
		if (num > 3) {
			std::cout << "Krivi unos!" << std::endl;
			continue;
		}

		auto a = animal_factory(num);
		std::cout << "Vasa zivotinja je " << a->species() << std::endl;
		lc += a->legs();
	
	}

	std::cout << "Ukupan broj nogu je: " << lc << std::endl;
}
