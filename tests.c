#include "monster.h"
#include "stdio.h"
#include "unity.h"

void setUp() {};
void tearDown() {};

void test_init()
{
	Monster monster;
	setName(&monster, "Chris", 5);

	TEST_ASSERT_EQUAL_STRING_LEN("Chris", getName(&monster), 5);
}

int run_tests()
{
	UNITY_BEGIN();
	RUN_TEST(test_init);
	return UNITY_END();

}

int main(void)
{
	return run_tests();
}
