#include <stdio.h>

int main(){
	int number,i,j;	
	printf("Please enter a number between 1 and 20\n");
	scanf("%d",&number);
	if (number<1 || number>20){
		printf("%d is not between 1 and 20!",number);
		return 0;
	}
	printf("\n");
	if (number%2==1){
		for (i=1;i<=number;i++){
			for (j=number;j>number-i;j--){
				printf("%d ",j);
			}
			printf("\n");
		}
	}
	else {
		for (i=1;i<=number;i++){
			for (j=1;j<=i;j++){
				printf("%d ",j);
			}
			printf("\n");
		}
	}
	return 0;
}
