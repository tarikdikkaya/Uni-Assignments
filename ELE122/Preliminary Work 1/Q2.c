#include <stdio.h>

int gcd(int x, int y){
	
	int holder;
	if (y>x){
		holder = y;
		y = x;
		x = holder;
		
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
	printf("Enter the positive integers you want to calculate their GCD of: ");
	scanf("%d %d", &a,&b);
	
	if (a<=0 || b <=0){
		printf("One or two of the integers you have given is not positive.");
		return 0;
	}
	printf("GCD of %d and %d is: %d", a, b, gcd(a,b));
	
	return 0;
}
