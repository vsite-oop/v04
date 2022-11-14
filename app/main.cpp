#include "app.h"
#include <iostream>
#include <string>


int main()
{
    using namespace std;
    using namespace vsite::oop::v4;

    cout << "***************ZBRAJAC NOGU***************" << endl;

    int choice = -1;
    leg_counter lc;

    cout << "Unesite tip zivotinje:\n"
        << "1. Cockroach\n"
        << "2. Sparrow\n"
        << "3. Tarantula\n"
        << "Vas izbor: " << endl;

    while (true)
    {
        cin >> choice;

        if (choice == 0) {
            cout << "\nIZLAZAK" << endl;
            break;
        }

        if (choice > 0 && choice < 4) {
            string added_animal_name = lc.add_animal(animal_factory(choice).get());
            cout << "Dodana zivotinja: " << added_animal_name << endl;
            cout << "Unesite sljedecu: " << endl;
        }

        else {
            cout << "Pogresan unos, ponovite unos: " << endl;
        }
    }
    cout << "Dodano je " << lc.legs() << " nogu";

}
