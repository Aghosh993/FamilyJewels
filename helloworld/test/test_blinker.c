#include "unity.h"
#include "blinker.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_blinker_NeedToImplement(void)
{
    // TEST_IGNORE_MESSAGE("Need to Implement blinker");
    TEST_ASSERT_EQUAL_INT(0, blinkerOn());
}
