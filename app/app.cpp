#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
    std::string leg_counter::add_animal(animal* a) {
        legCount += (*a).legs();
        return (*a).species();
    }

    std::unique_ptr<animal> animal_factory(int animalId)
    {
        switch (animalId)
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
    };
}
