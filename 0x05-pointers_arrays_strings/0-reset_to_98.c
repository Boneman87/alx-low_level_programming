#include "main.h"
/**
 * reset_to_98 - function updates value it points to.
 *
 * @n: a pointer the integer we want to update to 98
 *
 * Return: nothing.
 */
void reset_to_98(int *n);
{
	*n = 98;
}

/**
 * main - updates value for reset function
 *
 * Return: Always o
 */
int main(void)
{
	int m;
	int *Mp;

	Mp = &m;
	m = 65;
	reset_to_98(Mp);
	return (0);
}
