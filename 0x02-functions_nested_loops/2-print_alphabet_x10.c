include "main.h"
/**
 * print_alphabet_x10 - Printing small letters
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		_putchar(10);
		i++;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
	}
}
