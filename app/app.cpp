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

	unsigned insect::legs() const {
		return 6;
	}

	unsigned bird::legs() const {
		return 2;
	}

	unsigned spider::legs() const {
		return 8;
	}

	std::string leg_counter::add_animal(animal* a) {
		leg_number += a->legs();
		return a->species();
	};

	unsigned leg_counter::legs() const {
		return leg_number;
	};

	std::unique_ptr<animal> animal_factory(unsigned id) {
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





/*OLD CODE
#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	std::string cockroach::species() const {
		return insect_name;
	}

	std::string sparrow::species() const {
		return bird_name;
	}

	std::string tarantula::species() const {
		return spider_name;
	}

	unsigned insect::legs() const {
		return insect::insect_legs;
	}

	unsigned bird::legs() const{
		return bird::bird_legs;
	}

	unsigned spider::legs() const {
		return spider::spider_legs;
	}

	std::unique_ptr<animal> animal_factory(unsigned id) {
		std::unique_ptr<cockroach> cp(new cockroach);
		std::unique_ptr<sparrow> sp(new sparrow);
		std::unique_ptr<tarantula> tp(new tarantula);
		switch (id) {
		case 1:
			return cp;
		case 2:
			return sp;
		case 3:
			return tp;
		}
	};
}*/
