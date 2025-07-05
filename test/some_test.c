#include <stdio.h>
#include "calculator.h"
#include "unity/unity.h"

void setUp(void){
}

void tearDown(void){
}

int main(){
    UNITY_BEGIN();
    return UNITY_END();

    // if(add(2, 3) != 5) {
    //     printf("Test failed: add(2, 3) should be 5\n");
    //     return 1;
    // } else {
    //     printf("Test passed: add(2, 3) = %d\n", add(2, 3));
    //     return 0;
    // }
}
