#include "main.h"
/**
 * print_numbers - a function for printing numbers
 * Return: null
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}

