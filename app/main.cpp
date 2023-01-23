#include "app.h"
#include <stdio.h>
#include<iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	vsite::oop::v4::leg_counter lc;

	unsigned int animal_id = 0;

	std::cout << "Enter animals id: " << "\n";

	while (std::cin >> animal_id && animal_id > 0 &&animal_id < 4) {
		lc.add_animal(vsite::oop::v4::animal_factory(animal_id).get());
		std::cout << "Species: " << vsite::oop::v4::animal_factory(animal_id).get()->species() << "\n";
	}

	std::cout << "Total legs: " << lc.legs() << std::endl;
}
