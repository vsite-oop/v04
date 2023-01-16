#include "app.h"
#include <stdio.h>
#include<iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	/*std::unique_ptr <vsite::oop::v4::animal> animal_factory = vsite::oop::v4::animal::factory();
	vsite::oop::v4::animal* animal_ptr = animal_factory.get();*/

	vsite::oop::v4::leg_counter lc;

	unsigned int animal_id = 0;

	//while (std::cin >> animal_id) {
	//	std::unique_ptr <vsite::oop::v4::animal> animal_factory = vsite::oop::v4::animal_factory();

	//	//lc.add(animal_factory(animal_id));
	//	animal_intf* a = animal_factory(animal_id);
	//	lc.add(a);
	//}

	//std::cout << lc.vsite::oop::v4::total_leg_count() << std::endl;
}
