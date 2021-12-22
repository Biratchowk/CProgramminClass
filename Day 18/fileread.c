#include <stdio.h>
#include <string.h>


int main(){
	
	FILE *names;
	names = fopen("names.txt","r");
	char c;
	if(names){
		while((c =getc(names)) != EOF){
			// EOF
			printf("%c",c);
			
			
			}
	}
	
	
	
	
	fclose(names);

	return 0;
}


