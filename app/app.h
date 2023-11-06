#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal {
	public:
		virtual std::string species() = 0 {}
		virtual uint32_t legs() = 0 {}
		virtual ~animal() = default;
	};

	class insect : public animal {
	public:
		uint32_t legs() override;

	};

	class bird : public animal{
	public:
		uint32_t legs() override;
	};

	class spider : public animal {
	public:
		uint32_t legs() override;

	};

	class sparrow : public bird {
	public:
		std::string species() override;

	};

	class tarantula : public spider {
	public:
		std::string species() override;

	};
	
	class cockroach : public insect {
	public:
		std::string species() override;

	};

	std::unique_ptr<animal> animal_factory(int which);

	class leg_counter {
	private:
		uint32_t lc = 0;
	public:
		std::string add_animal(animal*);
		uint32_t legs();
	};



}