#include <stdio.h>

int main(){
	int num1;
	int num2;
	printf("Enter First Number: \n");
	scanf("%d",&num1);
	printf("Enter Second Number: \n");
	scanf("%d",&num2);
	
	int sum = num1 + num2;
	printf("The sum is %d",sum);
	
	return 0;
}
