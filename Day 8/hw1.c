// WAP that find simple interest using function [p*t*r/100]

#include <stdio.h>

void number(){
	int p; int t; int r; float interest;
	printf("Enter the principal:");
	scanf("%d",&p);
	printf("Enter the time:");
	scanf("%d",&t);
	printf("Enter the rate:");
	scanf("%d",&r);
	interest = (p * t * r) /100;
	printf("Result is:%f",interest);
	
}

int main(){
	number();
	
	
	
	return 0;
}
