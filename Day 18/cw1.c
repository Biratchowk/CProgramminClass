#include <stdio.h>
#include <string.h>


int main(){
	
	FILE *names;
	names = fopen("names.txt","a");
	
	if(names == NULL){
		exit(1);
	}
	
	char input[100];
	
	int i;
	 
	
	for(i=0; i<3; i++){
		
		
		printf("Enter name %d:",i);
		gets(input);
		
		fprintf(names, "%s\n", input);
		
		
	}
	
	
	


	return 0;
}
