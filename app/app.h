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
	public:
		virtual unsigned legs() const;
	};


	class spider : public animal {
	public:
		virtual unsigned legs() const;
	};


	class bird : public animal {
	public:
		virtual unsigned legs() const;
	};


	class cockroach : public insect {
		unsigned id = 1;
	public:
		virtual std::string species() const;
	};


	class tarantula : public spider {
		unsigned id = 3;
	public:
		virtual std::string species() const;
	};


	class sparrow : public bird {
		unsigned id = 2;
	public:
		virtual std::string species() const;
	};

	/*Metodom get() u test metodi iz pametnog pokazivaèa n dohvaæamo
	njegov interni (obièni) pokazivaè na alocirani objekt (valjda zato
	jer se unique_ptr ne može prenositi).
	
	add_animal primi pokazivaè na odreðenu životinju i onda metodom
	species() iz životinje dobijemo njen naziv u obliku stringa.
	
	legs() samo vraæa leg_number, a add_animal je ta koja
	poveæava broj nogu!*/
	class leg_counter {
		unsigned leg_number = 0;
	public:
		std::string add_animal(animal* a);
		unsigned legs() const;
	};

	/*"animal_factory() je factory pattern - jedina funkcija koja proizvodi
	konkretne životinje. I jedina koja zna kojoj životinji odgovora koji
	identifikator (ovdje broj). Mora/može vraæati pointer na baznu klasu
	(jer tako jedino može vratiti bilo koju životinju), a da nema
	problema sa trajanjem i brisanjem pointera vraæa smart pointer -
	std::unique_ptr."

	Od C++11 se koristi unique_ptr pametni pokazivaè. Za razliku od danas
	starog i deprecated auto_ptr, unique_ptr uopæe ne dopušta korištenje
	semantike kopiranja za prijenos vlasništva, veæ da bi to bilo moguæe
	mora se koristiti semantika prijenosa pomoæu funkcije move.

	Kada trebamo moguænost da jedan objekt ima više vlasnika koristimo
	shared_ptr pametni pokazivaè.

	make_unique je funkcija za napraviti unique_ptr */
	std::unique_ptr<animal> animal_factory(unsigned id);
}





/*OLD CODE
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


	// animal_factory(unsigned id);
}*/
