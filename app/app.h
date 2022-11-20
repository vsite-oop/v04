#pragma once
#include <string>
#include <memory>
#include <string>
#include <iostream>


namespace vsite::oop::v4 
{

    class animal {
    public:
        virtual std::string species() const = 0;
        virtual unsigned legs() const = 0;
        virtual ~animal() = 0;
    };


    class spider : public animal {
    public:
        unsigned legs() const override;
    };

    class bird : public animal {
    public:
        unsigned legs() const override;
    };

    class insect : public animal {
    public:
        unsigned legs() const override;
    };


    class tarantula : public spider {
    public:
        std::string species() const override;
    };

    class sparrow : public bird {
    public:
        std::string species() const override;
    };

    class cockroach : public insect {
    public:
        std::string species() const override;
    };


    class leg_counter {
        unsigned Legs;
    public:
        leg_counter();
        std::string add_animal(const animal* animal);
        unsigned legs() const;
    };

    std::unique_ptr<animal> animal_factory(const unsigned animalNum);

}