#include <stdio.h>

int main(){
	int price;
	printf("Enter the price:");
	scanf("%d",&price);
	
	if(price>1000){
		
		printf("Your Price is greater.");
	}else{
		printf("Your price is less.");
	}
	
	
	return 0;
}
