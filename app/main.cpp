#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
using namespace::vsite::oop::v4;


int main()
{
    leg_counter lc;
    unsigned int ID=1;

    while(ID){
        std::cout<<"Input animal ID(from 1 to 3)or 0 for end"<<"\n";
        std::cin>>ID;
        if(!ID)break;
        lc.add_animal(animal_factory(ID).get());
        std::cout<<"Species: "<<animal_factory(ID).get()->species()<<"\n";

    }
    std::cout<<"Total number of legs: "<<lc.legs();
}
