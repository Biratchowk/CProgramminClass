
// WAP in C That Adds Your information to file and read it from file. [Same Program]


#include <stdio.h>
#include <string.h>


int main(){
	
	FILE *info;
	info = fopen("info.txt","w");
	
	if(info == NULL){
		exit(1);
	}
	int i;
	char input[100];
	for(i=0; i<3; i++){
		printf("Enter your info %d:",i);
		gets(input);
		fprintf(info, "%s\n", input);
				
	}fclose(info);
	// reading char
	char c;
	
	info = fopen("info.txt","r");
	if(info){
		while((c =getc(info)) !=EOF){
			printf("%c",c);
		}
	}fclose(info);
	
	return 0;
}
