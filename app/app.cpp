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

	//animal* vsite::oop::v4::animal_factory(unsigned int animal_id) {
	std::unique_ptr <animal> vsite::oop::v4::animal_factory(unsigned int animal_id) {
		switch (animal_id)
		{
		case 1: return std::make_unique<cockroach>();
			break;
		case 3: return std::make_unique<tarantula>();
			break;
		case 2: return std::make_unique<sparrow>();
			break;
		default:
			return nullptr;
		}
	}

	std::string leg_counter::add_animal(animal* a) {
		leg_cnt += a->legs();
		//std::cout << a->species() << '\n';
		return a->species();
	}

	/*int vsite::oop::v4::total_leg_count(){
		return leg_counter::leg_cnt();
	}*/

	leg_counter::leg_counter() : leg_cnt(0) {};

	unsigned int leg_counter::legs() const{
		return leg_cnt;
	}

	animal::~animal() {};
	
}