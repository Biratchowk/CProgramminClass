// WAP in C that find the number is odd or even.

#include <stdio.h>

int main(){
	int num1;
	printf("Input Number:");
	scanf("%d",&num1);
	if(num1 % 2 == 0){
		printf("This number is \tEVEN.");
	}else{
		printf("This number is \tODD.");
	}	
	
	return 0;
}
