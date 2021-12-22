// WAP In C to find quotient and remainder of two integer
// using user input

#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	printf("Enter first Number:\n");
	scanf("%d",&num1);	
	printf("Enter second Number:\n");
	scanf("%d",&num2);
	int qu = num1 / num2;
	int reminder = num1 % num2;
	printf("Quotient is:%d\n",qu);
	printf("Reminder Number is:%d\n",reminder);
	
	
	return 0;
}
