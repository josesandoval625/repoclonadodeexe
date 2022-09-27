#include "gmock/gmock.h"

#include "example.h"


using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
	//------------testeto suma---------------
	TEST(testeo1, Example)
	{
		foobar::Example probarsuma{};
		ASSERT_EQ(probarsuma.suma(3,5),7);
	}
	TEST(testeo2, Example)
	{
		foobar::Example probarsuma{};
		ASSERT_EQ(probarsuma.suma(3, 5), 8);
	}TEST(testeo3, Example)
	{
		foobar::Example probarsuma{};
		ASSERT_EQ(probarsuma.suma(16, 5), 50);
	}TEST(testeo4, Example)
	{
		foobar::Example probarsuma{};
		ASSERT_EQ(probarsuma.suma(30,15 ), 45);
//-------------------testeo valor la hipotenusa de los 2 catetos
	}TEST(testeo5, Example)
	{
		foobar::Example probarPitagoras{};
		ASSERT_EQ(probarPitagoras.suma(3, 5), 7);
	}TEST(testeo6, Example)
	{
		foobar::Example probarPitagoras{};
		ASSERT_EQ(probarPitagoras.suma(3, 5), 7);
	}TEST(testeo7, Example)
	{
		foobar::Example probarPitagoras{};
		ASSERT_EQ(probarPitagoras.suma(3, 5), 7);
	}TEST(testeo8, Example)
	{
		foobar::Example probarPitagoras{};
		ASSERT_EQ(probarPitagoras.suma(3, 5), 7);
	}
}


