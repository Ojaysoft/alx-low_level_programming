#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the varioable n
 *Return : always 0
 */

int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	if (n % 10 > 5)
		printf("greater than 5\n");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
