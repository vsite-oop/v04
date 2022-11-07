#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal {
	public:
		 virtual std::string species() = 0;	
		 virtual unsigned int legs() = 0;
		 virtual ~animal() = default;
 	};
	class insect : public animal
	{
	public:
		unsigned int legs();
	};
	class cockroach : public insect 
	{
		std::string species();
	};
	class spider : public animal 
	{
		unsigned int legs();
	}; 
	class tarantula : public spider 
	{
		std::string species();
	};
	class bird : public animal 
	{
		unsigned int legs();
	};
	class sparrow : public bird 
	{
		std::string species();
		
	};
	std::unique_ptr<animal> animal_factory (int n);	
	class leg_counter
	{
	private:
		int brojac = 0;
	public:
		std::string add_animal(animal* a);
		unsigned int legs();
	};
}