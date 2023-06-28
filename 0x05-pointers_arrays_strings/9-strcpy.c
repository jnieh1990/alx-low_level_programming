#include "main.h"
/**
 * *_strcpy - reset
 *
 * Description: deferencement
 *
 * @src: char pointer
 *
 * @dest: char pointer
 *
 * Return: dest
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = scr[i];
	}
	dest[i] = '\n';
	return (dest);
}
