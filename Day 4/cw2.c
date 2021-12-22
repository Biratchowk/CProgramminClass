#include <stdio.h>

int main(){
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	
	
	if(number>0){
		
		printf("Your Number is Positive.");
	}else if(number ==0){
		printf("Your Number is neighter positive or negative.");
	}else{
			printf("Your Number is Negative.");
	}
	
	
	return 0;
}
