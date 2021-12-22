// WAP in C that find sum of array of numbers 

#include <stdio.h>

int main(){
	int num;
	printf("Enter how many num you want to add:");
	scanf("%d",&num);
	int numbers[num];
	
	int i;
	for(i=0; i<num; i++){
	
	printf("Enter the values of numbers:");
	scanf("%d",&numbers[i]);
	
	}
	int sum =0;
	for(i=0; i<num; i++){
	sum= sum + numbers[i];
	}
	
		printf("The sum is %d",sum);
	
	
	return 0;
}
