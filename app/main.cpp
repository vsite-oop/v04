#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	vsite::oop::v4::leg_counter lg;
	int broj;
	while (true)
	{
		std::cout << "Unesite broj: ";
		std::cin >> broj;
		if (broj == 0)
			break;
		else
		{
			std::cout << lg.add_animal(vsite::oop::v4::animal_factory(broj).get()) << std::endl;
		}
	}
	std::cout <<"Broj nogu je: " <<  lg.legs() << std::endl;
};
