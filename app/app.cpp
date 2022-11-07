#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{

	std::string cockroach::species() {
		return "cockroach";
	}

	std::string tarantula::species() {
		return "tarantula";
	}

	std::string sparrow::species() {
		return "sparrow";
	}

	unsigned int insect::legs() {
		return 6;
	}

	unsigned int spider::legs() {
		return 8;
	}

	unsigned int bird::legs() {
		return 2;
	}
}