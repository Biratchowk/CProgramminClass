// Program to find user is voter or non voter
#include <stdio.h>

int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);

// using if condition
if(age> 18){
	printf("You are voter");
}else{
printf("You are not voter");	
}


return 0;
}
