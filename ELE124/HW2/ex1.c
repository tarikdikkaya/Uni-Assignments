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
		/* setting and changing the seed for every
		iteration and program execution using time */
		srand(time(NULL) + 100 * i);
		
		// generating a random floating number between 0 and 20
		aRandomNumber = (double)(rand() % 2000) / 100;
		printf("%.2f\n", aRandomNumber);
	}
	system("pause");
	return 0;
} /* end function main */
