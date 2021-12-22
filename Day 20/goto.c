#include <stdio.h>
#include <string.h>

void checkEvenorOdd(int num){
	if(num%2 == 0){
		goto even;
	}else{
		goto odd;
	}
	
	even:
		printf("%d is Even \n",num);
		return;
	odd:
	    printf("%d is Odd \n",num);	
		
}

int main(){
	
	printf("Goto Example: ");
	int a = 1;

	while(a<=100){
		checkEvenorOdd(a);
		
		a++;
		
	}
	


	

	
	
	
	
	
	return 0;
}
