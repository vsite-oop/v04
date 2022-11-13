#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4
{
	class animal {
	public:
		virtual std::string species() const = 0;
		virtual uint32_t legs() const = 0;
		virtual ~animal() = 0;
	};

	class insect : public animal {
		const uint32_t ins_legs = 6;
	public:
		uint32_t legs() const override;
	};

	class spider : public animal {
		const uint32_t sp_legs = 8;
	public:
		uint32_t legs() const override;
	};

	class bird : public animal {
		const uint32_t brd_legs = 2;
	public:
		uint32_t legs() const override;
	};

	class cockroach : public insect {
		const std::string ins_name = "cockroach";
		const uint32_t id = 1;
	public:
		std::string species() const override;
	};

	class tarantula : public spider {
		const std::string spi_name = "tarantula";
		const uint32_t id = 3;
	public:
		std::string species() const override;
	};

	class sparrow : public bird {
		const std::string bir_name = "sparrow";
		const uint32_t id = 2;
	public:
		std::string species() const override;
	};

	class leg_counter {
		uint32_t nr_legs;
	public:
		leg_counter();
		uint32_t legs() const;
		std::string add_animal(const animal* a);

	};

	std::unique_ptr<animal> animal_factory(uint32_t id);
}