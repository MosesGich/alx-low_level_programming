#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints to 100
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
