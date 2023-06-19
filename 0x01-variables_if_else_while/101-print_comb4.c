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
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while ((i < j) && (j <= 9))
		{
			k = j + 1;
			while ((j < k) && (k <= 9))
			{
				putchar ('0' + i);
				putchar ('0' + j);
				putchar ('0' + k);
				if ((i == 7) && (j == 8) && (k == 9))
					break;
				if ((i != 7) || (j != 8) || (k == 9))
				{
					putchar (',');
					putchar (' ');
				}
				k++;
			}
			j++;

		}
		i++;
	}
	putchar ('\n');
	return (0);
}
