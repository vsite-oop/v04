#include "app.h"
#include <algorithm>
#include <iostream>
#include <string>
namespace vsite::oop::v4
{
	std::string animal::species() { return "";};
	unsigned int animal::legs() { return 0; };
	unsigned int  insect::legs() { return 6; };
	std::string cockroach::species()
		{
			return "cockroach";
		}
	unsigned int spider::legs()
		{
			return 8;
		}
	std::string tarantula::species()
	{
		return "tarantula";
	}
	unsigned int bird::legs()
	{
		return 2;
	}

	std::string  sparrow::species()
	{
		return "sparrow";
	}
	std::unique_ptr<animal>animal_factory(int broj)
	{
		switch (broj)
		{
		case 1:
			return std::make_unique<cockroach>();
			break;
		case 2:
			return std::make_unique<sparrow>();
			break;
		case 3:
			return std::make_unique<tarantula>();
		default:
			return nullptr;
		}


	}
	std::string leg_counter::add_animal(animal* a )
	{
		brojac += a->legs();
		return a->species();
	}
	unsigned int leg_counter::legs()
	{
		return brojac;
	}
}