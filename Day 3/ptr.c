#include <stdio.h>

int main(){
	
	int amount;
	int rate;
	int principal;
	printf("Enter The amount:\n");
	scanf("%d",&amount);
	printf("Enter the rate:\n");
	scanf("%d",&rate);
	printf("principal");
	scanf("%d",&principal);
	
	int a = amount * rate * principal / 100;
	printf("The amount is:%d",a);
	
	
	
	return 0;
}
