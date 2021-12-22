// WAP in C to declare pointer, store address of variables and print 
// 1. memory address
//2. value from memory address.

#include <stdio.h>
#include <string.h>

int main(){
	int* p;
	int a = 100;
	
	
	p = &a;
	
	printf("The memory address of a is :%p\n",&a);
	printf("The value of memory address of  a is: %d\n",a);
	
	int b= 200;
	p = &b;
	
	printf("The memory address of b is:%p\n",&b);
	printf("The value of memory address of b is: %d\n");
	
	int c = 300;
	p = &c;
	
	printf("The memory address of c is: %p\n",&c);
	printf("The value of memory address of c is: %d\n",c);	
	return 0;
}
