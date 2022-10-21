#include <stdio.h>
/**
 * main - Prints the numbers 1 - 100.
 * Instead of a multiple of 3, prints Fizz
 * Instead of a multiple of 5, prints Buzz
 * For multiples of 3 and 5, prints FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
