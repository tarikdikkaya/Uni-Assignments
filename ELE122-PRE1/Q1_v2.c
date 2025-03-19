#include <stdio.h>
#include <time.h>

int mysqrt(int x){
	clock_t begin = clock();
	double precision = 0.01;
	double num;
	
	num = x/2;
	
	if ( num*num >= x + precision ){
		while(num*num >= x + precision)
			num = num - precision;
	}
	else {
	while(num*num <= x - precision)
		num = num + precision;
	}
		
	if (num - (int)num < 0.5)
		num = (int)num;
	else
		num = (int)num + 1;
	clock_t end = clock();
	double time_spent = (double)(end - begin);
	printf("\nExecution time: %f",time_spent/1000);
	
	return (int)num;
	}
	
int main(int num){
	printf("Enter the number you want to calculate the integer square root of: ");
	scanf("%d", &num);
	num = num;
	printf("\nNearest integer square root of %d: %d", num, mysqrt(num));
	return 0;
}

