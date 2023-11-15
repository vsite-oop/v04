#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	std::string insect::species() const {
		return "insect";
	}
	unsigned int insect::legs() const {
		return 6;
	}
	cockroach::cockroach() {};
	std::string cockroach::species() const {
		return "cockroach";
	}
	std::string spider::species() const {
		return "spider";
	}
	unsigned int spider::legs() const {
		return 8;
	}
	tarantula::tarantula() {};
	std::string tarantula::species() const {
		return "tarantula";
	}

	std::string bird::species() const {
		return "bird";
	}
	unsigned int bird::legs() const {
		return 2;
	}
	sparrow::sparrow() {};
	std::string sparrow::species() const {
		return "sparrow";
	}

	std::string leg_counter::add_animal(animal* new_animal) {
		legs_total += new_animal->legs();	
		return new_animal->species();
	}

	unsigned int leg_counter::legs() const {
		return legs_total;
	}

	std::unique_ptr<animal> animal_factory(int type) {
		switch (type)
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