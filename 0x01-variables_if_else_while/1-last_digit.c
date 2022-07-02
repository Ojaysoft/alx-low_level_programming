#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0
 * Return: Always 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of n is greater than 5: the string and is greater than 5");
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of n is 0: the string and is 0");
	else
		printf("Last digit of n is less than 6 and not 0: the string and is less than 6 and not 0");
	return (0);
