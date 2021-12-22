// WAP that adds, subtract, divide, multiply 2 numbers using function. [Return Type and Parameter]
#include <stdio.h>
int adds(int num1, int num2){
	int result;
	result = num1 + num2;
	printf("%d",result);
	return result;
}
int sub(int num1, int num2){
	int result;
	result = num1 - num2;
	
	return result;
}
int mult(int num1, int num2){
	int result;
	result = num1 * num2;
	return result;
}
int div(int num1, int num2){
	int result;
	result = num1 / num2;
	return result;
}
int main(){
	
	
	char c;
  	printf("What you want to do [a for add, s for subtract]");
  	scanf("%c",&c);
  	
  	
	int num1, num2;
	printf("Enter num1:");
  	scanf("%d",&num1);
  	printf("Enter num2:");
  	scanf("%d",&num2);
  	
  	switch(c){
  		case 'a':
  			adds(num1, num2);
  			break;
  		case 's':
		  sub(num1, num2);
		  break;
		 
		 default: 
		 printf("This is default"); 
	  }
  



	return 0;
}



