#include <stdio.h>
#include <string.h>
struct Person{
	char name[100];
	float height;
	int age;
};

int main(){
	struct Person p1;
	struct Person p2;
	
	p1.age = 29;
	p1.height = 6.0f;
	strcpy(p1.name,"Hari Sharma");
	printf("Name is %s\n",p1.name);
	printf("Age is %d\n",p1.age);
	printf("Height is %f",p1.height);
	
	p2.age = 40;
	p2.height = 5.0f;
	strcpy(p2.name,"Rohit Sharma");
	
	
	
	return 0;
}
