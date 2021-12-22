// WAP that find simple interest using function [p*t*r/100]

#include <stdio.h>

float calculateInterest(int p, int t, int r){
	return p * t*r/100;
}

int main(){
	
	float result = calculateInterest(100000, 3, 2);
	printf("The interest is: %.2f",result);
	
	return 0;
}
