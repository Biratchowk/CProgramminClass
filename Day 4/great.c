// Finding the great number between 3 numbers
#include <stdio.h>

int main(){
	int num1 = 50;
	int num2 = 520;
	int num3 = 30;
	
	if(num1>num2 && num1>num3){
		printf("%d is greater.",num1);
	}else if(num2 > num1 && num2>num3){
			printf("%d is greater.",num2);
	}else if(num3 > num1 && num3>num2){
			printf("%d is greater.",num3);
	}

	
}




