// WAP that find multiply of user input number.
#include <stdio.h>

int main(){
int start = 1;
int end = 10;
	int i;
	int j;
	for(i=start; i<=end; i++){
		
		// Nested Loop: loop inside loop
		for(j=1; j<=10;j++){
			printf("%d  * %d = %d\n",i, j, i*j);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
