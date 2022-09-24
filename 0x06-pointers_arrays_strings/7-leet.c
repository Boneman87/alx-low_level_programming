#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @s: input string.
 * @lct - lower case letters
 * @uct - upper case letters
 *
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int N = 0, x;
	int lct[] = {97, 101, 111, 116, 108};
	int uct[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + N) != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (*(s + N) == lct[x] || *(s + N) == uct[x])
			{
				*(s + N) = num[x];
				break;
			}
		}
		N++;
	}
	return (s);
}
