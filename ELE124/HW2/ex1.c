#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	// variable declarations
	float aRandomNumber;
	int i;
	for (i = 0; i < 50; i++)
	{
		// setting a seed to generate different numbers when program re-executed (also in every iteration)
		srand(time(NULL) + i);
		// generating the whole and fractional part of the floating number
		aRandomNumber = rand() % 20 + (double)(rand() % 100) / 100;
		printf("%.2f\n", aRandomNumber);
	}
	return 0;
} /* end function main */
