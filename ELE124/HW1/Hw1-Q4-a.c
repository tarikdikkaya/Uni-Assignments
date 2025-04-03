#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size){
	int homeValue;
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity,3) + pow(size,2))*10000;
	
	printf("Home value is: %d", homeValue);
	return homeValue;	
}

int main(){
	int pop,siz;
	computeHomeValue(pop, siz);
	return 0;
}
