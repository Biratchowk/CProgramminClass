#include <stdio.h>


int main(){
	
	FILE *f;
	f= fopen("hii.txt","w");
	
	if(f == NULL){
		exit(1);
	}
	
	// Writing something to file
	char input[100];
	gets(input);
	fprintf(f,"%s",input);

return 0;
}


// WAP in c to write 10 names and address and save it to file using comma.
e.g 
Ramesh Thapa, Ktm
Hari Sharma, Btl
