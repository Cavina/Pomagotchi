#include "monster.h"
#include "timer.h"
#include "stdio.h"
#include "unity.h"

void setUp() {};
void tearDown() {};

void test_init()
{
	Monster monster;
	setName(&monster, "Chris", 5);
	setSpecies(&monster, "Punctualis Rex", 14);
	setAge(&monster, 0);

	TEST_ASSERT_EQUAL_STRING_LEN("Chris", getName(&monster), 5);
	TEST_ASSERT_EQUAL_STRING_LEN("Punctualis Rex", getSpecies(&monster), 14);
	TEST_ASSERT_EQUAL(0, getAge(&monster)); 

	TEST_ASSERT_EQUAL(0, monster.age);
}

void testTimer()
{
	Timer timer;
	setSeconds(&timer, 25);

	TEST_ASSERT_EQUAL(25, timer.seconds);


}

int run_tests()
{
	UNITY_BEGIN();
	RUN_TEST(test_init);
	RUN_TEST(testTimer);
	return UNITY_END();

}

int main(void)
{
	return run_tests();
}
