#include <stdio.h>
#include <math.h>

void computeHomeValue(void)
{
	int homeValue;
	int popularity;
	int size;
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);

	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

	printf("Home value is: %d", homeValue);
}

void main(void)
{
	computeHomeValue();
}
