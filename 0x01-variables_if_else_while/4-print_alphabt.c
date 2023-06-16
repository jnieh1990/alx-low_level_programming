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
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
			putchar (c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
