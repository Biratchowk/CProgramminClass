// WAP in c to multiply float value using user input.

#include <stdio.h>

int main(){
	float num1;
	float num2;
	
	printf("Enter The first number:\n");
	scanf("%f",&num1);
	
	printf("Enter The second Number:\n");
	scanf("%f",&num2);
	
	float result = num1 * num2;
	printf("Your result is:\n%.2f",result);
	
	return 0;
}
