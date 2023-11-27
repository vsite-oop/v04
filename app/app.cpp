#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	animal::~animal() {}

	std::unique_ptr<animal> animal_factory(int choice) {
		switch (choice) {
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