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
	int i;

	i = 0;
	while (i < 10)
	{
		putchar ('0' + i);
		i = i + 1;
	}
	putchar ('\n');
	return (0);
}
