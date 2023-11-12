#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
    int IDzivotinje = 0;
    std::cout << "Unesite redni broj zivotinje (1-3): \n";

    leg_counter bn;

    while (true)
    {
        std::cout << "Odabir: ";
        std::cin >> IDzivotinje;

        if (IDzivotinje < 1 || IDzivotinje > 3)
        {
            break;
        }

        std::cout << "Zivotinja: " << bn.add_animal(animal_factory(IDzivotinje).get()) << "\n";
    }
    std::cout << "Ukupan broj nogu: " << bn.legs() << "\n\n";
}