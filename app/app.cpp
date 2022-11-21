#include "app.h"
#include <algorithm>
#include <string>

namespace vsite::oop::v4
{

    animal::~animal() {};

    std::string tarantula::species() const { return "tarantula"; }
    std::string sparrow::species() const { return "sparrow"; }
    std::string cockroach::species() const { return "cockroach"; }

    unsigned spider::legs() const { return 8; }
    unsigned bird::legs() const { return 2; }
    unsigned insect::legs() const { return 6; } 

    std::unique_ptr<animal> animal_factory(const unsigned animalNum) {
        switch (animalNum)
        {
        case 1: return std::make_unique<cockroach>();
        case 2: return std::make_unique<sparrow>();
        case 3: return std::make_unique<tarantula>();
        default:
            return nullptr;
        }
    }

    leg_counter::leg_counter(): Legs{ 0 }{}

    std::string leg_counter::add_animal(const animal* animal) {
        Legs += animal->legs();
        return animal->species();
    }

    unsigned leg_counter::legs() const {
        return Legs;
    }
}