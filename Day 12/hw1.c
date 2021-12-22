// 1. WAP In C that sort numbers in decending order.

#include <stdio.h>

int main(){
	int numbers[10] = {10, 100, 80, 90, 70, 60, 20, 30, 50, 40};
	int i;
	int j;
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(numbers[i]>numbers[j]){
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
				
			}
		}		
		
	}
	
	for(i=0; i<10; i++){
		printf("%d\n",numbers[i]);
	}
	
	return 0;
}
