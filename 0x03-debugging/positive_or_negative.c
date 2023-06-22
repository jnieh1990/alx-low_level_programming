#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * positive_or_negative - Entry point
 *
 * @n: int to check
 *
 * Description: verify if n is positif, negatif, or zero
 *
 * Return: always true, always 0
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
