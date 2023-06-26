/**
 * _strlen - reset
 *
 * Description: deferencement
 *
 * @s: char
 *
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
