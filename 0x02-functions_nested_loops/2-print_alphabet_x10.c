#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar('\n');
	}
}
