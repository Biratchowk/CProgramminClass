#include <stdio.h>
#include <string.h>

int main(){
	char name[20], lastname[20];
	puts("Enter your first name:");
	gets(name);
	printf("Enter your last name:");
	gets(lastname);
	
	//join of string
	int fullname = strcat(name, lastname);
	printf("Your full name is: %s\n", fullname);
	//uppercase
	printf("Your full name in upper case is: %s\n", strupr(fullname));
	//lowercase
	printf("Your full name in lower case is: %s\n", strlwr(fullname));
	//reverse
	printf("Your full name in reverse case is: %s\n", strrev(fullname));
	//length of string
	int len = strlen(fullname);
	printf("The length of string is: %d\n",len);  //error
	
	//compare
	int compare = strcmp(name, lastname);
	if(compare==0){
		printf("Your first name & last name is same.");
	}else{
		printf("Your first name & last name is not same.");
	}
	
	
	
	
	
	
	
	
	return 0;
}
