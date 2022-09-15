#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(10);
		i++;
		print_alphabet();
	}
	return (0);
}
/**
 * print_alphabet - Printing small letters
 */
void print_alphabet(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		_putchar(j);
	}
}
