#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual uint32_t legs() const = 0;
		virtual ~animal() = default;
	};

	class bird : public animal {
	public:
		uint32_t legs() const override;
	};

	class sparrow : public bird {
	public:
		std::string species() const override;
	};

	class insect : public animal {
	public:
		uint32_t legs() const override;
	};

	class cockroach : public insect {
	public:
		std::string species() const override;
	};

	class spider : public animal {
	public:
		uint32_t legs() const override;
	};

	class tarantula : public spider {
	public:
		std::string species() const override;
	};

	class black_widow : public spider {
	public:
		std::string species() const override;
	};

	class leg_counter {
	private:
		uint32_t lc = 0;
	public:
		std::string add_animal(animal*);
		uint32_t legs()  const;
	};

	std::unique_ptr<animal> animal_factory(int which);

}