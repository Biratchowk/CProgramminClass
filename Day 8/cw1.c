#include <stdio.h>

void printName(){
	
	printf("My name is Manoj Guragain");
	printAddress();
}
//No Parameter and No Return Type
void printAddress(){
	printf("Kathmandu");
}
//Parameter and No Return Type
void add(int a, int b){
	int sum = a +b;
	printf("The result is %d",sum);
}
// Parameter and Return type
int sub(int a, int b){
int diff = a -b;
return diff;	
}

// No Parameter and Return Type
int getVoterminAge(){
	return 16;
}

int main(){
add(10,30);
int result = sub(40,10);
printf("The result is %d",result);	

int voterminAge = 	getVoterminAge();
printf("The result is %d",voterminAge);
	
	return 0;
}
