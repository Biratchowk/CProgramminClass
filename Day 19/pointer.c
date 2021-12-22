#include <stdio.h>

int main(){
	
	
int* p, c;
int a=100;

p = &a;
// Memory address and values.
printf("Address of a: %p\n",&a);
printf("Value of a is: %d\n\n",a);

// 
printf("Address of pointer c is %p\n",c);
printf("Data of pointer p is %d", *p );

a = 300;
printf("The pointer of a is %p",p);	
printf("Data of pointer p is %d", *p );	
	return 0;
}



