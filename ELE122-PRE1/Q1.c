#include <stdio.h>

int mysqrt(int x){
	
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
	
	return (int)num;
}
	
	
	

int main(){
	int num;
	printf("Enter the number you want to calculate the integer square root of: ");
	scanf("%d", &num);
	printf("\nInteger square root of %d: %d", num, mysqrt(num));
	
	return 0;
	
}
