#include "./euler_problems.h"

/*****************/
/*** PROBLEM 6 ***/
/*****************/

/**
 * Find the difference between the sum of the squares of the 
 * first one hundred natural numbers and the square of the sum.
 */
integer euler_problem_6(integer upper_bound) 
{
    integer i;
    integer sum_of_squares;
    integer square_of_sum;

    square_of_sum = (upper_bound) * (upper_bound + 1) / 2;
    square_of_sum *= square_of_sum;

    sum_of_squares = 0;
    
    for (i = 0; i <= upper_bound; ++i) 
    { sum_of_squares += i * i; }

    return square_of_sum - sum_of_squares;
}