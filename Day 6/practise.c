#include <stdio.h>

int main(){
	int i;
	int num2;
	printf("Enter your number:");
	scanf("%d",&num2);
	
	for(i=1; i<10; i++){
		int mult = num2*i;
		printf("%d * %d = %d\n",num2,i,mult);
		
	}
	
	
	
	
	
	return 0;
}
