#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

int main() {
    leg_counter broj_nogu;
    unsigned int ID = 1;

    while (ID) {
        std::cout << "Upisi ID: ";
        std::cin >> ID;
        if (!ID) break;
        broj_nogu.add_animal(animal_factory(ID).get());
        std::cout << "Vrsta zivotinje: " << animal_factory(ID).get()->species() << "\n";
    }

    std::cout << "Ukupan broj nogu: " << broj_nogu.legs() << "\n";
    return 0;
}
