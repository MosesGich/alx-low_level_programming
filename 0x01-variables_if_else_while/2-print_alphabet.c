#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	if (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
