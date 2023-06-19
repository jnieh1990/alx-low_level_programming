#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet
 *
 * Return: always true, always 0
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while ((i < j) && (j <= 9))
		{
			putchar ('0' + i);
			putchar ('0' + j);
			if ((i == 8) && (j == 9))
				break;
			if ((i != 8) || (j != 9))
			{
				putchar (',');
				putchar (' ');
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
