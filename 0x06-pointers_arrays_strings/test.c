#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	for (y = 0; y < n; y++)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
	}
	return (dest);
}
