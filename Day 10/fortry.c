#include <stdio.h>

int main(){
	float num1, highNum1;
	
	printf("Enter your number: ");
	scanf("%d",&num1);
	highNum1 = num1*1.1;
	

	
	while(num1<highNum1){
		num1 = num1*1.02;
		printf("%.1f\n",num1);
		
		num1++;
			
	}
	return 0;
}
