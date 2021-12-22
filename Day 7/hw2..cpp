// Find the square of number and square root of number using c.

#include <stdio.h>
#include <math.h>

int main(){
	int num1;
	int sqnum;
	printf("Enter the number:");
	scanf("%d",&num1);
//for square number
	sqnum = num1 * num1;
	printf("The square number of number is: %d\n",sqnum);
	
//for square root
	float val = sqrt(num1);
	printf("The square root result is %f: ",val);
	
	return 0;
}
