#include "CppUnitTest.h"
#include "../app/app.h"

#include <type_traits>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vsite::oop::v4;

namespace all_tests
{
	TEST_CLASS(test_v04)
	{
	public:
		TEST_METHOD(animal_hierarchy)
		{
			Assert::IsTrue(std::is_abstract_v<animal>);
			Assert::IsTrue(std::is_polymorphic_v<animal>);

			Assert::IsTrue(std::is_base_of_v<animal, insect>);
			Assert::IsTrue(std::is_abstract_v<insect>);
			Assert::IsTrue(std::is_base_of_v<insect, cockroach>);
			Assert::IsFalse(std::is_abstract_v<cockroach>);

			Assert::IsTrue(std::is_base_of_v<animal, spider>);
			Assert::IsTrue(std::is_abstract_v<spider>);
			Assert::IsTrue(std::is_base_of_v<spider, tarantula>);
			Assert::IsFalse(std::is_abstract_v<tarantula>);

			Assert::IsTrue(std::is_base_of_v<animal, bird>);
			Assert::IsTrue(std::is_abstract_v<bird>);
			Assert::IsTrue(std::is_base_of_v<bird, sparrow>);
			Assert::IsFalse(std::is_abstract_v<sparrow>);
		}

		TEST_METHOD(concrete_insect)
		{
			cockroach c;
			insect& i = c;
			animal& a = c;
			Assert::AreEqual("cockroach", a.species().c_str());
			Assert::AreEqual(6u, a.legs());
		}

		TEST_METHOD(concrete_bird)
		{
			sparrow s;
			bird& b = s;
			animal& a = s;
			Assert::AreEqual("sparrow", a.species().c_str());
			Assert::AreEqual(2u, a.legs());
		}

		TEST_METHOD(concrete_spider)
		{
			tarantula t;
			spider& s = t;
			animal& a = t;
			Assert::AreEqual("tarantula", a.species().c_str());
			Assert::AreEqual(8u, a.legs());
		}

		TEST_METHOD(legg_counter_different_animals)
		{
			leg_counter lc;
			Assert::AreEqual("cockroach", lc.add_animal(animal_factory(1).get()).c_str());
			Assert::AreEqual("sparrow", lc.add_animal(animal_factory(2).get()).c_str());
			Assert::AreEqual("tarantula", lc.add_animal(animal_factory(3).get()).c_str());
			Assert::AreEqual(16u, lc.legs());
		}
		
		TEST_METHOD(legg_counter_same_animal)
		{
			leg_counter lc;
			lc.add_animal(animal_factory(2).get());
			lc.add_animal(animal_factory(2).get());
			Assert::AreEqual(4u, lc.legs());
		}
	};
}
