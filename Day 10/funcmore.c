
#include <stdio.h>

int main(){
	
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	//oddorEven(num);
	
int result=	EvenOrOdd(num);
if(result ==0){
	printf("even");

}else{
	printf("odd");
}	
	
	return 0;
}

void oddorEven(int n){
	if(n%2 == 0){
		printf("Even number");
	}else{
		printf("odd number");
	}
	
}

int EvenOrOdd(int n){
	
	return n%2;
	}

