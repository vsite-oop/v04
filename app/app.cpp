#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	std::string cockroach::species() const {
		return "cockroach";
	}

	std::string sparrow::species() const {
		return "sparrow";
	}

	std::string tarantula::species() const {
		return "tarantula";
	}

	unsigned int insect::legs() const {
		return 6;
	}

	unsigned int bird::legs() const {
		return 2;
	}

	unsigned int spider::legs() const {
		return 8;
	}

	std::string leg_counter::add_animal(animal* a) {
		leg_number += a->legs();
		return a->species();
	};

	unsigned int leg_counter::legs() const {
		return leg_number;
	};

	std::unique_ptr<animal> animal_factory(unsigned int id) {
		switch (id) {
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();
		}
	};
}
