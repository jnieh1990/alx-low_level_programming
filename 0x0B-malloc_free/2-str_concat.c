#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[k] != '\0')
		k++;

	concat = malloc(sizeof(char) * (i + k + 1));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (j = 0; s1[j]; j++)
			concat[j] = s1[j];
	}

	if (s2 != NULL)
	{
		for (l = 0; s2[l]; l++)
			concat[i + l] = s2[l];
	}

	return (concat);
}