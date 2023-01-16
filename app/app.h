#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal {
	public:
		//virtual animal add_animal() = 0;
		virtual unsigned int legs() = 0;

		virtual std::string species() = 0;
		virtual ~animal() = 0;
	};
	////////////////////////////
	class insect : public animal {
	public:
		unsigned int legs() override;
	};

	class spider : public animal {
	public:
		unsigned int legs() override;
	};

	class bird : public animal {
	public:
		unsigned int legs() override;
	};
	/////////////////////////////
	class cockroach : public insect {
		std::string species() override;
	};

	class tarantula : public spider {
		std::string species() override;
	};

	class sparrow : public bird {
		std::string species() override;
	};

	//animal* animal_factory(unsigned int animal_id);

	class leg_counter {
	public:
		unsigned int leg_cnt = 0;
	public:
		std::string add_animal(animal* a); // vraca zivatinju koja ima povratnu vrijednost string
		leg_counter();
		unsigned int legs() const;
	};

	//int total_leg_count();

	std::unique_ptr <animal> animal_factory(unsigned int animal_id);
	//std::unique_ptr <animal> animal_factory(unsigned int animal_id);
}