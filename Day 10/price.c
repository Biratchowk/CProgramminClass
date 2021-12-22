#include <stdio.h>

int main(){
	float highNum, result1, result2, result3, result4;
	float num;
	printf("Enter your Number: ");
	scanf("%f",&num);
	
	highNum = num * 1.1;
	
	if(num<=highNum){
		result1 = num*1.02;
		printf("First  %.1f:\n",result1);
		result2 = result1*1.02;
		printf("Second  %.1f:\n",result2);
		result3 = result2*1.02;
		printf("Third  %.1f:\n ",result3);
		result4 = result3*1.02;
		printf("Fourth  %.1f:\n",result4);
		printf("highNum is %.1f\n",highNum);	
		}
	
	return 0;
}
