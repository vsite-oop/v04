#include "app.h"
#include <iostream>
// read animal id's (until 0) and display species name
// display total leg count

using namespace::vsite::oop::v4;
int main()
{
    leg_counter lc;
    unsigned int ID = 1;

    while (true) {
        std::cout << "Unesite  ID zivotinje:" << "\n";
        std::cin >> ID;
        if (ID > 3) {
            std::cout << "Wrong input.\n";
            continue;
        }

        if (ID == 0) {
           
            break;
        }
        lc.add_animal(animal_factory(ID).get());
        std::cout << "Vrsta: " << animal_factory(ID).get()->species() << "\n";

    }
    std::cout << "Ukupni broj nogu je: " << lc.legs();
}
