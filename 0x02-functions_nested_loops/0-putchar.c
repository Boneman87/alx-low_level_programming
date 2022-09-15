#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char str1[] = {' ', '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i = 0; i < 10; i++)
	{
		str1[i] = i + 1;
		_putchar(i);
	}
	return (0);

}
