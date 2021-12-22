#include <stdio.h>
#include <string.h>
int main(){
	
	char name[50];
	printf("Enter name: ");
	scanf("%s",name);
	printf("Your name is %s.\n",name);
	// To find length of string
	int len = strlen(name);
	printf("The length of string is %d\.n",len);
	// String join
	char fname[25] = "Hari";
	char lname[30] = "Hari";
	

	printf("The full name is %s",strcat(fname,lname));
	
	int result = strcmp(fname, lname);
	if(result == 1){
		printf("First name and lastname are equal.");
	}else{
		printf("Firstname and lastname are not equal.");
	}
	
	return 0;
}
