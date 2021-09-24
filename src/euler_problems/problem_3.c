#include "./euler_problems.h"

/*****************/
/*** PROBLEM 3 ***/
/*****************/

/**
 * Find the largest prime factor of n
 */
integer euler_problem_3(integer n) 
{
    integer i;

    for (i = 2; i < n; i++) 
    {
        while (!(n % i)) { n /= i; }
        if (n == 1) { return i; }
    }

    return n;
}