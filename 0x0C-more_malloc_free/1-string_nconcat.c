#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * @n : unsigned int
 * Return: concat of s1 and s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		concat = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (n < len2 && i < len1 + n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	while (n >= len2 && i < len1 + len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	s[i] = '\0';

	return (concat);
}
