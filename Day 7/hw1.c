// WAP in C That cand add, subtract, multiply, divide using switch. Simple App

#include <stdio.h>

int main(){
	
	
	char c;
		

	printf("Enter the choice a for Add, s for Sub, m for Mul:");
	scanf("%s",&c);

	switch(c){
		printf("Hello");
		int adding;
		int sub1;
		int multy;
			int divid ;
		int num1 = 1;
		int num2=20;
		case 'a':
			adding = num1 + num2;
			printf("%d + %d = %d\n",num1, num2, adding);
			break;
		case 's':
			 sub1 = num1-num2;
			printf("%d - %d = %d\n",num1, num2, sub1);
			break;
		case 'm':
			 multy = num1*num2;
			printf("%d * %d = %d\n",num1, num2, multy);
			break;
		case 'd':
			 divid = num1/num2;
			printf("%d / %d = %d\n",num1, num2, divid);
			break;
		default:
			printf("Invalid Error");
		}
		

return 0;
}
