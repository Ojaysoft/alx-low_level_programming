#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the vaariable n each time it is executed
 * and prints our based on condition
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
