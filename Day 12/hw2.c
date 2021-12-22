// 2. WAP in C that store 5 values in array and print only even numbers.

#include <stdio.h>

int main(){
	int i;
	int number[5];
	printf("Enter 5 numbers:");
	for(i = 0; i<5; ++i){
     scanf("%d",&number[i]);
  }
	for(i=0; i<5; i++){
		if(number[i]%2==0){
			printf("%d\n",number[i]);
	}
	}
	
	return 0;
}
