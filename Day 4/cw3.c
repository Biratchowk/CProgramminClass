#include <stdio.h>

int main(){
	int num1;
	printf("Enter the number:");
	scanf("%d",&num1);
	
	if (num1 == 1){
		printf("Sunday");
		}else if(num1 == 2){
				printf("Monday");
		}else if(num1 ==3){
			printf("Tuesday");
		}else if(num1 ==4){
			printf("Wednesday");
		}else if(num1 ==5){
			printf("Thursday");
		}else if(num1 ==6){
			printf("Friday");
		}else if (num1 ==7){
			printf("Saturday");
		}else{
			printf("wrong number");
		}
	
	
	
	
	return 0;
}
