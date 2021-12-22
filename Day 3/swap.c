#include <stdio.h>

int main(){
	int num1 = 10;
	int num2 = 20;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("Num1 is %d\n",num1);
	printf("Num2 is %d",num2);
	
	
	
	return 0;
}





