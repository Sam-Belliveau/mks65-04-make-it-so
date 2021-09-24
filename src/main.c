#include <stdio.h>
#include "./euler_problems/euler_problems.h"

int main(void) 
{
    // some macros that make testing problems neater
    #define PROBLEM_HEADER(qnum) printf("\n\t- Question #" #qnum " -\n")
    #define TEST_FUNC(func, answer) printf(#func " \t-> %lld \t[" #answer "]\n", (long long)func)
    #define RUN_FUNC(func) printf(#func " \t-> %lld\n", (long long)func)

    PROBLEM_HEADER(1);
    TEST_FUNC(euler_problem_1(10), 23);
    RUN_FUNC(euler_problem_1(1000));

    PROBLEM_HEADER(2);
    TEST_FUNC(euler_problem_2(10), 10);
    TEST_FUNC(euler_problem_2(50), 44);
    RUN_FUNC(euler_problem_2(4000000));

    PROBLEM_HEADER(3);
    TEST_FUNC(euler_problem_3(13195), 29);
    TEST_FUNC(euler_problem_3(13 * 17 * 19), 19);
    TEST_FUNC(euler_problem_3(7 * 3 * 6), 7);
    RUN_FUNC(euler_problem_3(600851475143));
    
    PROBLEM_HEADER(4);
    TEST_FUNC(euler_problem_4(2), 9009);
    RUN_FUNC(euler_problem_4(3));

    PROBLEM_HEADER(5);
    TEST_FUNC(euler_problem_5(1, 3), 6);
    TEST_FUNC(euler_problem_5(1, 10), 2540);
    RUN_FUNC(euler_problem_5(1, 20));

    PROBLEM_HEADER(6);
    TEST_FUNC(euler_problem_6(10), 2640);
    RUN_FUNC(euler_problem_6(100));

    // Undefine all the print macros
    #undef PROBLEM_HEADER
    #undef TEST_FUNC
    #undef RUN_FUNC
}