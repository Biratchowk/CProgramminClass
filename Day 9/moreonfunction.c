// WAP that find cube of number using function.

#include <stdio.h>
// No Parameter and No Return Type
void printName(){
	printf("My Name is Milan");
}

// Parameter and No Return Type
void findCube(int val){
	float result = val * val * val;
	printf("The result is %f",result);
}

// Parameter and Return Type
float calculateInterest(float p, float t, float r){
	return p * t * r/ 100;
}

// No parameter and return type
int calcuateAge(){
	int year;
	printf("Enter your birth year: \n");
	scanf("%d",&year);
	int result = 2021-year;
	return result;
}

int main(){
	//printName();
	//findCube(5);
//	float result = calculateInterest(1000,2,3);
//	printf("The result is %f",result);
int age = calcuateAge();
printf("The age is %d",age);
	return 0;
}



