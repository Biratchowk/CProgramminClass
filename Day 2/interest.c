#include <stdio.h>

int main(){
	float principal = 1000.0;
	float time = 3.0;
	float r = 12.0;
	
	float intrest = principal*time*r/100;
	printf("The intrest rate is \t %.2f",intrest);
	
	
	
	
	return 0;
}
