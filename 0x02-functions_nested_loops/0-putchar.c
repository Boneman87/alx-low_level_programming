#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char str1[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i=0; str1[i]; i++)
		-putchar(i);
	return (0);

}
