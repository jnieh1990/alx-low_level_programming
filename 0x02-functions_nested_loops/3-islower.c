/**
 * _islower - check if char is lower.
 *
 * @c: char to check
 *
 * Description: check lower
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if ((c >= 97) && (c < 123))
		return (1);
	else
		return (0);
}
