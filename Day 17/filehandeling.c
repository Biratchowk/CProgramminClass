#include <stdio.h>

int main(){
	
	int number;
	FILE *fptr;
	
	
	fptr = fopen("helo.txt","w");
	
	if(fptr = NULL){
		printf("Error!!!!");
		exit(1);
	}
	
	printf("Enter number: \n");
	scanf("%d",&number);
	
	fprintf(fptr, "%d",number);
	fclose(fptr);
	
	return 0;
}
