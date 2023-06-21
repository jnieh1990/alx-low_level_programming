#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * void print_to_98 - to 98
 *
 * @n: int
 *
 * Description: to 98
 *
 * Return: noting
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
