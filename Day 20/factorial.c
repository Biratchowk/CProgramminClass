#include <stdio.h>


int fact(int num){
	if(num <=1){
		return 1;
	}else{
		return num * fact(num-1);
	}
}



int main(){
	
	int i = 5;
	printf("The factorial of 5 is: %d ",fact(i));
	// 5 * 4 * 3 * 2 * 1
	
	
	return 0;
}
