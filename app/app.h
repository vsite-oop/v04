#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
	class animal {
	public:
		virtual ~animal() = default;
		virtual std::string species() const = 0;
		virtual unsigned int legs() const = 0;
	};

	class insect :public animal {
	public:
		unsigned int legs() const override;
	};

	class cockroach :public insect {
	public:
		cockroach();
		std::string species() const override;
	};

	class spider :public animal {
	public:
		unsigned int legs() const override;
	};

	class tarantula:public spider{
	public:
		tarantula();
		std::string species() const override;
	};

	class bird :public animal {
	public:
		unsigned int legs() const override;
	};

	class sparrow:public bird{
	public:
		sparrow();
		std::string species() const override;
	};
	
	class leg_counter {
		unsigned int legs_total;
	public:
		leg_counter() : legs_total(0) {}
		std::string add_animal(animal* new_animal);
		unsigned int legs() const;
	};

	std::unique_ptr<animal> animal_factory(int type);
}