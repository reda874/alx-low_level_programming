#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printing the last digit
 * Return: 0 - valid
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m;

	m = n % 10;
	if (m > 0)
	printf("last digit of %d is %d and greater than 5\n", n, m);

	if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);

	if (m < 6 && m != 0)
		printf("last digit of %d is %d less than 6 and not 0\n", n, m);

	return (0);
}