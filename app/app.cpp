#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
    uint32_t spider::legs() const
    {
        return 8;
    }

    uint32_t insect::legs() const
    {
        return 6;
    }

    unsigned int bird::legs() const
    {
        return 2;
    }


    std::string tarantula::species() const
    {
        return "tarantula";
    }

    std::string cockroach::species() const
    {
        return "cockroach";
    }

    std::string sparrow::species() const
    {
        return "sparrow";
    }


    std::unique_ptr<animal> animal_factory(uint32_t idx)
    {
        switch (idx)
        {
        case 1:
            return std::make_unique<cockroach>();

        case 2:
            return std::make_unique<sparrow>();

        case 3:
            return std::make_unique<tarantula>();

        default:
            break;
        }
    }

    std::string leg_counter::add_animal(animal* new_animal)
    {
        this->leg_count += new_animal->legs();
        return new_animal->species();
    }


    uint32_t leg_counter::legs() const
    {
        return this->leg_count;
    }

}
