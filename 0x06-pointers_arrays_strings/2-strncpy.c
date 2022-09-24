#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
