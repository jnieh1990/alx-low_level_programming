#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hs = haystack;
		char *nd = needle;

		while (*hs == *nd && *nd != '\0')
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
			return (haystack);
	}
	return (0);
}
