// WAP that find multiply of user input number.
#include <stdio.h>

int main(){
	int num1;
	int i;
	printf("Enter the number:");
	scanf("%d",&num1);
	
	for(i=1; i<=10; i++){
		int mult = num1*i;
		printf("%d * %d = %d\n",num1,i,mult);
	}
	
	
	
	
	return 0;
}
