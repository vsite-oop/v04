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
}
