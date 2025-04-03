#include <stdio.h>
#include <math.h>
int main(){
	int pop;
	int size;
	int homeValue;
	printf("Enter popularity: ");
	scanf("%d", &pop);
	printf("Enter size: ");
	scanf("%d", &size);
	
	homeValue = (pow(pop,3) + pow(size,2))*10000;
	
	printf("Home value is: %d", homeValue);
	return 0;
}
