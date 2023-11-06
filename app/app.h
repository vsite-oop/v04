#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
    class animal {  
    public:    
        virtual ~animal() = default;
        virtual std::string species() = 0;
        virtual unsigned int legs() = 0;
    };
    
    class insect : public animal { };
    class cockroach : public insect {
    public:
        virtual std::string species() { return "cockroach"; }
        virtual unsigned int legs() { return 6u; }
    };

    class spider : public animal { };
    class tarantula : public spider {
    public:
        virtual std::string species() { return "tarantula"; }
        virtual unsigned int legs() { return 8u; }
    };

    class bird : public animal { };
    class sparrow : public bird {
    public:
        virtual std::string species() { return "sparrow"; }
        virtual unsigned int legs() { return 2u; }
    };

    class leg_counter {
        unsigned legCount=0;
    public:
        std::string add_animal(animal* a);

        unsigned legs() { return legCount; }
    };

    std::unique_ptr<animal> animal_factory(int animalId);
}