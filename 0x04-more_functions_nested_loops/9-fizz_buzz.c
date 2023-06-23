#include <stdlib.h>
#include <stdio.h>

/**
 * main - type the alphabet ten times
 *
 * Description: write alphabet
 *
 * Return: 0
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
