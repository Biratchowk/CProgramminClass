// WAP in c to write 10 names and address and save it to file using comma.

#include <stdio.h>
#include <string.h>

int main(){
	
	FILE *name;
	name = fopen("name.txt","a");
	
	if(name == NULL){
		exit(1);
	}
	char input[100];
	int i;

	for(i=0; i<2; i++){
	gets(input);
	fprintf(name,"%s\n",input);
	
	
}

	
return 0;
	
}
