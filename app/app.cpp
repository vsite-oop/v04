#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{

	unsigned int bird::legs() const{
		return 2;
	}
	unsigned int spider::legs() const {
		return 8;
	}
	unsigned int insect::legs() const {
		return 6;
	}

	std::string sparrow::species() const{
		return "sparrow";
	}
	std::string tarantula::species() const{
		return "tarantula";
	}
	std::string cockroach::species() const{
		return "cockroach";
	}

	std::unique_ptr<animal> animal_factory(int selection) {
		switch (selection)
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

	std::string leg_counter::add_animal(animal* animal) {
		leg_count += (*animal).legs();
		return animal->species();
	}

	unsigned int leg_counter::legs() const{
		return leg_count;
	}
}