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
        if (ID > 3) {
            std::cout << "\nUnijeli ste preveliki broj!\n";
            continue;
        }
        std::cout << "Vrsta zivotinje: " << broj_nogu.add_animal(animal_factory(ID).get()) << "\n";

    }

    std::cout << "\nUkupan broj nogu: " << broj_nogu.legs() << "\n";
    return 0;
}