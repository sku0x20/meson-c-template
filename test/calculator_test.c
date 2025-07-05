#include <stdio.h>
#include "calculator.h"
#include "unity/unity.h"

void setUp(void){
}

void tearDown(void){
}

void test_add(void) {
    TEST_ASSERT_EQUAL(add(2, 3), 5);
    TEST_ASSERT_NOT_EQUAL(add(2, 3), 6);
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL(subtract(5, 2), 3);
    TEST_ASSERT_NOT_EQUAL(subtract(5, 2), 4);
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL(multiply(3, 4), 12);
    TEST_ASSERT_NOT_EQUAL(multiply(3, 4), 11);
}

void test_divide(void) {
    TEST_ASSERT_EQUAL(divide(8, 2), 4);
    TEST_ASSERT_NOT_EQUAL(divide(8, 2), 5);
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    return UNITY_END();
}
