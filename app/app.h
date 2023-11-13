#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal 
	{
	public:
		virtual std::string species() = 0;
		virtual unsigned legs() = 0;
		virtual ~animal();	
	};
	

	class bird: public animal
	{

		unsigned legs() override;

	};

	class insect : public animal 
	{
		
		unsigned legs() override;

	};

	class spider : public animal 
	{
		
		unsigned legs() override;

	};

	class sparrow : public bird 
	{
		std::string species() override;

	
	};

	class cockroach : public insect 
	{
		std::string species() override;
	};

	class tarantula :public spider
	{
		std::string species() override;
	
	};

	std::unique_ptr<animal> animal_factory(int idNumber);

	class leg_counter 
	{
	private:
		int brojac = 0;
	public:
		std::string add_animal(animal* a);

		unsigned legs() { return brojac;  }
	};

	
}