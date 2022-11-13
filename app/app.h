#pragma once
#include <string>
#include <memory>

/*Apstraktna klasa je ona koja ima bar jednu èisto virtualnu funkciju.
To nije konkretna klasa. Ne možemo uopæe praviti objekt takve klase
(kompajler ne da), nego se koriste pointeri i reference na njih.
Pure virtual funkcija je ona koja se u izvedenoj klasi MORA PREPISATI.

Polimorfizam je mehanizam kojim se dopušta da razne klase koriste
ista imena za svoje metode.
Bazna klasa je polimorfna ako ima bar jednu virtualnu funkciju.

----------------------------------------------------
 SVI INSEKTI IMAJU 8 NOGU, SVI PAUCI IMAJU 6 NOGU!!!
----------------------------------------------------
*/

namespace vsite::oop::v4 
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual unsigned legs() const = 0;
	};


	class insect : public animal {
		unsigned insect_legs = 6;
	public:
		virtual unsigned legs() const;
	};


	class spider : public animal {
		unsigned spider_legs = 8;
	public:
		virtual unsigned legs() const;
	};


	class bird : public animal {
		unsigned bird_legs = 2;
	public:
		virtual unsigned legs() const;
	};


	class cockroach : public insect {
		const std::string insect_name = "cockroach";
		unsigned id = 1;
	public:
		virtual std::string species() const;  // Must copy pure virtual function in derived class!
	};


	class tarantula : public spider {
		const std::string spider_name = "tarantula";
		unsigned id = 3;
	public:
		virtual std::string species() const;
	};


	class sparrow : public bird {
		const std::string bird_name = "sparrow";
		unsigned id = 2;
	public:
		virtual std::string species() const;
	};


	class leg_counter {
	public:
		std::string add_animal();
	};


	//animal_factory(unsigned id);
}
