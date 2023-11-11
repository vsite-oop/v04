#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	animal::~animal() {};

	std::string animal::species() { return " "; }
	unsigned animal::legs() { return 0; }
	
	std::string cockroach::species() { return "cockroach"; }
	unsigned insect::legs() { return 6; }
	
	std::string sparrow::species() { return "sparrow"; }
	unsigned bird::legs() { return 2; }
	
	std::string tarantula::species() { return "tarantula"; }
	unsigned spider::legs() { return 8; }

	std::string leg_counter::add_animal(animal* a) 
	{
		
		brojac+= a->legs();
		return a->species();
	}

	std::unique_ptr<animal> animal_factory(int idNumber)
	{
		switch (idNumber)
		{
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();


		default:
			return nullptr;
		}

	}


}