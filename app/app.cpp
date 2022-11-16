#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	animal::~animal() {
	}

	uint32_t insect::legs() const {
		return 6;
	}

	uint32_t spider::legs() const {
		return 8;
	}

	uint32_t bird::legs() const {
		return 2;
	}


	std::string cockroach::species() const {
		return "cockroach";
	}


	std::string sparrow::species() const {
		return "sparrow";
	}


	std::string tarantula::species() const {
		return "tarantula";
	}


	leg_counter::leg_counter() : nr_legs(0) {
	};

	uint32_t leg_counter::legs() const {
		return nr_legs;
	}

	std::string leg_counter::add_animal(const animal* a) {
		nr_legs += a->legs();
		return a->species();
	}

	std::unique_ptr<animal> animal_factory(uint32_t id) {
		switch (id) {
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