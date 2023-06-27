#include "main.h"
/**
 * rev_string - reset
 *
 * Description: deferencement
 *
 * @s: char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, lenght = 0;
	char temp;

	while (s[i++])
		lenght++;

	for (i = lenght - 1; i >= lenght / 2; i--)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
	}
}
