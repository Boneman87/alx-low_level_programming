#include "main.h"
/**
 * _isalpha: checks if a character is an alphabet
 * @c: the character to be evaluated if it is an alphabetical letter
 *
 * Return:1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c);
{
	int x, y, z;

	x = 97;
	while (x < 122)
	{
		x++;
		if (c == x)
		{
			z++;
			break;
		}
	}

	y = 65
		while (y < 91)
		{
			y++;
			if (c == y)
			{
				z++;
				break;
			}
		}
	if (z == 0)
		return (0);
	else
		return (1);
}
