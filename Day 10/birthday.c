#include <stdio.h>




int main(){
	int birthYear;
	printf("Enter your birth Year:");
	scanf("%d",&birthYear);
	findAge(birthYear);
	
	
	return 0;
}

void findAge(int year){
	int age;
	age = 2021-year;
	printf("Your age is %d",age);
	
}



