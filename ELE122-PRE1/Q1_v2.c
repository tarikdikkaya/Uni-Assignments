#include <stdio.h>
#include <time.h>

int mysqrt(int x){
	clock_t begin = clock();
	double precision = 0.01;
	double num,holder;

	num = x/2;
	while (num*num > x + precision || num*num < x - precision ){
		if (num*num >= x + precision){
				holder = num;
				num = num/2;
		}
		else 
			num = (holder + num)/2;	
	}
	if (num - (int)num < 0.5)
		num = (int)num;
	else
		num = (int)num + 1;
			
	clock_t end = clock();
	double time_spent = (double)(end - begin);
	printf("\nExecution time: %f",time_spent/1000);
	return num;
	}
	
int main(int num){
	printf("Enter the number you want to calculate the integer square root of: ");
	scanf("%d", &num);
	num = num;
	printf("\nNearest integer square root of %d: %d", num, mysqrt(num));
	return 0;
}

