// WAP in C thatsort numbers

#include <stdio.h>

int main(){
	
	int numbers[5] = {10, 20, 50, 30, 40};
	int i, j;
	// Sort
	for(i=0; i<5; i++){
		for(j = i+1; j<5; j++){
			if(numbers[i]> numbers[j]){
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	// print
	for(i=0; i<5; i++){
		printf("%d\n",numbers[i]);
	}
	
	}
