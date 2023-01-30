#include "app.h"
#include<iostream>
#include<format>
using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	leg_counter lc;
	while (true) {
		std::cout << "Insert animal id: ";
		unsigned input;
		std::cin >> input;
		if (input == 0) {
			std::cout << std::format("Total number of legs: {}\n", lc.legs());
			break;
		}
		else if (input > 3) {
			std::cout << "Wrong input.\n";
			continue;
		}
		std::cout << lc.add_animal(animal_factory(input).get()).c_str() \
			<< "\n";
	}
}

