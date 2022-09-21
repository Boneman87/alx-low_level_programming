#include "main.h"

/**
 * _bone - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _bone(char *b)
{
	int x = 0;
	unsigned int j = 0;
	int k = 1;
	int l = 0;

	while (b[x])
	{
		if (b[x] == 45)
		{
			k *= -1;
		}

		while (b[x] >= 48 && b[x] <= 57)
		{
			l = 1;
			j = (j * 10) + (b[x] - '0');
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
