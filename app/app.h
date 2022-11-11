#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
    class animal {
    public:
        virtual ~animal() = 0;
        virtual std::string species() const = 0;
        virtual uint32_t legs() const = 0;
    };

    class bird : public animal {
    public:
        uint32_t legs() const override;
    };

    class sparrow : public bird {
    public:
        std::string species() const override;
    };

    class spider : public animal {
    public:
        uint32_t legs() const override;
    };

    class tarantula : public spider {
    public:
        std::string species() const override;
    };

    class insect : public animal {
    public:
        uint32_t legs() const override;
    };

    class cockroach : public insect {
    public:
        std::string species() const override;
    };

    class leg_counter {
        uint32_t mLegs;
    public:
        leg_counter();
        std::string add_animal(const animal* createdAnimal);
        uint32_t legs() const;
    };

    std::unique_ptr<animal> animal_factory(const uint32_t animalCode);

}