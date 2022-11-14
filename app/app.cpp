#include "app.h"
#include <algorithm>
#include <memory>

namespace vsite::oop::v4
{
    std::unique_ptr<animal> animal_factory(const uint32_t animalCode) {
        switch (animalCode)
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

    animal::~animal() {};

    uint32_t bird::legs() const {
        return 2;
    }

    std::string sparrow::species() const {
        return "sparrow";
    }

    uint32_t spider::legs() const {
        return 8;
    }

    std::string tarantula::species() const {
        return "tarantula";
    }

    uint32_t insect::legs() const {
        return 6;
    }

    std::string cockroach::species() const {
        return "cockroach";
    }

    leg_counter::leg_counter()
    {
        mLegs = 0;
    }

    std::string leg_counter::add_animal(const animal* createdAnimal) {
        mLegs += createdAnimal->legs();
        return createdAnimal->species();
    }

    uint32_t leg_counter::legs() const {
        return mLegs;
    }

}// namespace