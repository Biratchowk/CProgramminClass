#include <stdio.h>

int main(){
	
	int i;
	int num1;
	int mult;
	printf("Enter your number:");
	scanf("%d",&num1);
	
	for(i=1; i<=20; i++){
		mult = num1*i;
		printf("%d * %d = %d\n",num1,i,mult);
	}
	
	
	
	
	return 0;
}
