#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
    class animal {  
    public:    
        virtual ~animal() = default;
        virtual std::string species() const = 0;
        virtual unsigned int legs() const = 0;
    };
    
    class insect : public animal { 
        unsigned int legs() const override { return 6u; }
    };
    class cockroach : public insect {
        std::string species() const override { return "cockroach"; }
    };

    class spider : public animal { 
        unsigned int legs() const override { return 8u; }
    };
    class tarantula : public spider {
        std::string species() const override { return "tarantula"; }
    };

    class bird : public animal {
        unsigned int legs() const override { return 2u; }
    };
    class sparrow : public bird {
        std::string species() const override { return "sparrow"; }
    };

    class leg_counter {
        unsigned legCount=0;
    public:
        std::string add_animal(animal* a);
        unsigned legs() const { return legCount; }
    };

    std::unique_ptr<animal> animal_factory(int animalId);
}