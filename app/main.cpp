#include "app.h"
#include <iostream>
// read animal id's (until 0) and display species name
// display total leg count

using namespace::vsite::oop::v4;
int main()
{
    leg_counter lc;
    unsigned int ID;

    while (true) {
        std::cout << "Unesite  ID zivotinje:" << "\n";
        std::cin >> ID;
        if (ID <= 0 || ID > 3) {
            break;
        }
        
        std::cout << "Vrsta: "<< lc.add_animal(vsite::oop::v4::animal_factory(ID).get()) << "\n";
       
    }
    std::cout << "Ukupni broj nogu je: " << lc.legs();
}
