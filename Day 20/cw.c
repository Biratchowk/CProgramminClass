#include <stdio.h>


int fact(int num){
	if(num<=1){
		return 1;
		
	}else{
		return num* fact(num-1);
	}
	
	
	
}


int main(){
	int n = 6;
	printf("Ther factorial of num is: %d", fact(n));
	
	
	
	
	
	
	
	return 0;
}
