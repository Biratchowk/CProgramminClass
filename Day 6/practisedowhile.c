#include <stdio.h>

int main(){
	
	int i =1;
	int num1;
	printf("Enter the number:");
	scanf("%d",&num1);
	do{
		int mult = num1*i;
		
		printf("%d * %d = %d\n",num1,i,mult);
		i++;
	}while(i<10);
		return 0;
}
		
		
	
