// WAP in C that find sum from 1 to 10. Hint[for loop]

#include <stdio.h>

int main(){
	
	int i;
	int sum = 0;
	
	for(i=1; i<=10; i++){
		sum = sum + i;
	}
	printf("%d",sum);
	
	return 0;
}
