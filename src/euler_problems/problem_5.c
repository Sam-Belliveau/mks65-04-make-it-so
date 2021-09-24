#include "./euler_problems.h"

/*****************/
/*** PROBLEM 5 ***/
/*****************/

static integer lcm(integer a, integer b) 
{
    integer o;

    o = a > b ? a : b;
    while((o % a) || (o % b)) { ++o; }

    return o;
}

/**
 * 2520 is the smallest number that can be divided by each 
 * of the numbers from 1 to 10 without any remainder.
 * 
 * What is the smallest positive number that is evenly 
 * divisible by all of the numbers from 1 to 20?
 */
integer euler_problem_5(integer min, integer max) 
{
    integer prod;
    integer i;

    prod = 1;

    for (i = min; i <= max; ++i) 
    { prod = lcm(i, prod); }

    return prod;
}