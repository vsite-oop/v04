#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
    class animal{

       public:
        virtual std::string species()const =0;
        virtual unsigned int legs()const =0;
        virtual ~animal() = 0;

    };
    class insect:public animal{
        public:
         unsigned int legs()const override;
    };
    class bird:public animal{
        public:
         unsigned int legs()const override;
    };
    class spider:public animal{
        public:
         unsigned int legs()const override;
    };
    class cockroach:public insect{
        public:
         std::string species()const override;
    };
    class sparrow:public bird{
        public:
         std::string species()const override;
    };
    class tarantula:public spider{
        public:
         std::string species()const override;
    };

    class leg_counter{
         unsigned int n_legs;
        public:
         leg_counter();
         unsigned int legs()const;
         std::string add_animal(const animal* new_animal);
    };
    std::unique_ptr<animal> animal_factory(const uint32_t animalID);


}