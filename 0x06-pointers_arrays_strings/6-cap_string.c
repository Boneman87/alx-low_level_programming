#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int N = 0;
	int x;
	int cap_let[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + N) >= 97 && *(s + N) <= 122)
		*(s + N) = *(s + N) - 32;
	N++;
	while (*(s + N) != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (*(s + N) == cap_let[x])
			{
				if ((*(s + (N + 1)) >= 97) && (*(s + (N + 1)) <= 122))
					*(s + (N + 1)) = *(s + (N + 1)) - 32;
				break;
			}
		}
		N++;
	}
	return (s);
}
