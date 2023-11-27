#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual unsigned legs() const = 0;
		virtual ~animal() = 0;
	};

	class insect : public animal {
	public:
		unsigned legs() const override {
			return 6;
		}
	};

	class cockroach : public insect {
		std::string species() const override {
			return "cockroach";
		}
	};

	class spider : public animal {
	public:
		unsigned legs() const override {
			return 8;
		}
	};

	class tarantula : public spider {
		std::string species() const override {
			return "tarantula";
		}
	};

	class bird : public animal {
	public:
		unsigned legs() const override {
			return 2;
		}
	};

	class sparrow : public bird {
		std::string species() const override {
			return "sparrow";
		}
	};

	std::unique_ptr<animal> animal_factory(int choice);

	class leg_counter {
		unsigned leg = 0;

	public:
		std::string add_animal(const animal* a) {
			leg += a->legs();
			return a->species();
		}
		unsigned legs(){
			return leg;
		}
	};
}