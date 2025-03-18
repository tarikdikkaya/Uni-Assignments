#include <stdio.h>

int gcd(int x, int y){
	
	int holder;
	if (y>x){
		holder = y;
		y = x;
		x = cache;
		
	}
	
	while (x%y != 0){
		holder = y;
		y = x%y;
		x = holder;
	}
	
	return y;
	
}

int main(){
	int a,b;
	printf("Enter the numbers you want to calculate their GCD of: ");
	scanf("%d", &a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	printf("GCD of %d and %d is: %d", a, b, gcd(a,b));
	
	return 0;
}
