#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for program
 * 
 * Description: print if a number is positive, negative or zero
 * 
 * Return: Always 0 (Success) and a number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Number: %d\n", n);

	if (n > 0) {
		printf("%d is positive\n", n);   
	} else if (n < 0) {
		printf("%d is negative\n", n);
	} else {
	    	printf("%d is zero\n", n);
	}

	return (0);
}
