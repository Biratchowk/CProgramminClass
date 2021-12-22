#include <stdio.h>
#include <string.h>

union bus{
	char name[100];
	float price;
} b1, b2;


struct car{
	char name[100];
	float price;
} c1, c2;

int main(){
	

//	strcpy(b1.name, "Hello");
//
//	
//	printf("%s ",b1.name);


printf("The size of union = %d bytes",sizeof(b1));
printf("The size of struct = %d bytes",sizeof(c1));
	
	
	return 0;
}
