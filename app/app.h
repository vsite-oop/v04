#pragma once
#include <string>
#include <memory>
#include<iostream>

namespace vsite::oop::v4 
{
	class animal {
	public:
		virtual std::string species()=0;
		virtual unsigned int legs()=0;
	};

	class insect : public animal {
	public:
		virtual unsigned int legs();
	};

	class spider : public animal {
	public:
		virtual unsigned int legs();
	};

	class bird : public animal {
	public:
		virtual unsigned int legs();
	};

	class cockroach : public insect {
	public:
		std::string species();
	};

	class tarantula : public spider {
	public:
		std::string species();
	};

	class sparrow : public bird {
	public:
		std::string species();
	};

	class leg_counter {
		unsigned leg_count = 0;
	public:
		std::string add_animal(animal* ani);
		unsigned int legs();
	};

	std::unique_ptr<animal> animal_factory(int selection);
}