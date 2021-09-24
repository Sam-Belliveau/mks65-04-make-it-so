#include "./euler_problems.h"

/*****************/
/*** PROBLEM 4 ***/
/*****************/

static integer get_digit(integer num, integer digit) 
{
    return (num / (integer) powl(10.0L, digit)) % 10;
}

static integer palindromic(integer num) 
{
    integer size;
    integer i;
    
    size = floor(log10(num));

    for (i = 0; i <= (size >> 1); ++i) 
    {
        if (get_digit(num, i) != get_digit(num, size - i)) 
        { return 0; }
    }

    return 1;
}

/**
 * A palindromic number reads the same both ways. The largest palindrome 
 * made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * 
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
integer euler_problem_4(integer digits) 
{
    integer min;
    integer max;
    integer i, j;
    integer largest;
    integer prod;

    min = (integer) powl(10.0L, digits - 1);
    max = (integer) powl(10.0L, digits) - 1;
    largest = 0;

    for (i = max; i >= min; --i)
    for (j = max; j >= min; --j) 
    {
        prod = i * j;

        if (prod > largest && palindromic(prod))
        { largest = prod; }
    }
    
    return largest;
}
