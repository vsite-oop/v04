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
}*/
