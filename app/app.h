#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
    class animal
    {
    public:
        virtual std::string species() const = 0;
        virtual uint32_t legs() const = 0;
        virtual ~animal() = 0 {};
    };

    /**********************************************/

    class spider : public animal
    {
    public:
        virtual std::string species() const = 0;
        uint32_t legs() const override;
    };

    class insect : public animal
    {
    public:
        virtual std::string species() const = 0;
        uint32_t legs() const override;
    };

    class bird : public animal
    {
    public:
        virtual std::string species() const = 0;
        uint32_t legs() const override;
    };

    /**********************************************/

    class tarantula : public spider
    {
    public:
        std::string species() const override;
    };

    class cockroach : public insect
    {
    public:
        std::string species() const override;
    };

    class sparrow : public bird
    {
    public:
        std::string species() const override;
    };

    /**********************************************/

    class leg_counter
    {
    private:
        int leg_count = 0;

    public:
        std::string add_animal(animal* new_animal);
        uint32_t legs() const;
    };

    std::unique_ptr<animal> animal_factory(uint32_t idx);
}
