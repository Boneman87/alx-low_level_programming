#include "main.h"
/**
 * _islower - functions that checks if character is a lowercase letter
 *
 * @c:the character that will be determined if it is lowercase or not
 * 
 * Return: 1 if character c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	int x, y;

	x = 97;
	y = 0;
	while (x < 122)
	{
		x++;
		if (c == x)
		{
			y++;
			break;
		}
	}
	if (y == 0)
		return (0);
	else
		return (1);

}
