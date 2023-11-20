#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{


     unsigned int insect::legs()const {
          return 6;
        }
     unsigned int bird::legs()const {
          return 2;
        }
     unsigned int spider::legs()const {
          return 8;
        }
     std::string cockroach::species()const {
          return "cockroach";
        }
     std::string sparrow::species()const {
          return "sparrow";
        }
     std::string tarantula::species()const {
          return "tarantula";
        }

     leg_counter::leg_counter() :n_legs{ 0 } {}

     std::string leg_counter::add_animal(const animal* new_animal) {
          n_legs += new_animal->legs();
            return new_animal->species();

        }
     unsigned int leg_counter::legs()const {
          return n_legs;
        }
     std::unique_ptr<animal> animal_factory(const uint32_t ID) {
          switch (ID) {
            case 1:
                return std::make_unique<cockroach>();
            case 2:
                return std::make_unique<sparrow>();
            case 3:
                return std::make_unique<tarantula>();
           default:
               return nullptr;
          }

     }

}
