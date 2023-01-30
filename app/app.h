#pragma once
#include <string>
#include <memory>



namespace vsite::oop::v4
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual unsigned int legs() const = 0;
	};


	class insect : public animal {
	public:
		virtual unsigned int legs() const override;
	};


	class spider : public animal {
	public:
		virtual unsigned int legs() const override;
	};


	class bird : public animal {
	public:
		virtual unsigned int legs() const override;
	};


	class cockroach : public insect {
	public:
		virtual std::string species() const override;
	};


	class tarantula : public spider {
	public:
		virtual std::string species() const override;
	};


	class sparrow : public bird {
	public:
		virtual std::string species() const override;
	};

	class leg_counter {
		unsigned int leg_number = 0;
	public:
		std::string add_animal(animal* a);
		unsigned int legs() const;
	};


	std::unique_ptr<animal> animal_factory(unsigned int id);
}


