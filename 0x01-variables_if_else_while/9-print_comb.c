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
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar ('0' + c);
		if (c != 9)
		{
			putchar (',');
			putchar (' ');
		}
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
