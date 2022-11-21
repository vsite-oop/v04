#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
using namespace vsite::oop::v4;

int main()
{

    int animal = 10;
    leg_counter lc;

    std::cout << "Pick animal:\n 1 - Cockroach\n 2 - Sparrow\n 3 - Tarantula\n 0 - Exit" << std::endl;

    while (animal != 0)
    {
        std::cin >> animal;

        if (animal > 0 && animal < 4) {
            std::string added = lc.add_animal(animal_factory(animal).get());
            std::cout << added << std::endl;
        }
        else if (animal == 0) {
            std::cout << "\nExiting..." << std::endl;
        }
        else {
            std::cout << "Not a valid number " << std::endl;
        }
    }
    std::cout << "\nNumber of legs:  " << lc.legs() << "\n";

}
