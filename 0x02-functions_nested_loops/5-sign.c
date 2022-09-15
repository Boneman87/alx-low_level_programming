#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: number to be printed
 *
 * Return: 1,0 and -1 for positive, zero and negative numbers 
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

