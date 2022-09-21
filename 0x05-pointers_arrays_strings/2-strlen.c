#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int j = 0;
	int k = 1;
	int l = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			k *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			l = 1;
			j = (j * 10) + (s[x] - '0');
			x++;
		}

		if (l == 1)
		{
			break;
		}

		x++;
	}

	j *= k;
	return (j);
}
