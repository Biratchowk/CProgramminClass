#include <stdio.h>

int main(){
	int total = 0;
	int i;
	for(i=0; i<=5; i++){
		total = total + i;
	}
	printf("The total is %d",total);
	return 0;
}
