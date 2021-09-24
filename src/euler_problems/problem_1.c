#include "./euler_problems.h"

/*****************/
/*** PROBLEM 1 ***/
/*****************/

/**
 * If we list all the natural numbers below 10 that are multiples 
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
integer euler_problem_1(integer upper_bound) 
{
    integer sum;
    integer i;

    sum = 0;

    for (i = 0; i < upper_bound; ++i) 
    {
        if (!(i % 3) || !(i % 5)) 
        { sum += i; }
    }

    return sum;
}