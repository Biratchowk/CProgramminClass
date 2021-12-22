#include <stdio.h>
#include <string.h>



struct Teacher{
	char name[20];
	char address[25];
	char subject[20];
	int age;
	int salary;
	
	
};

void display(struct Teacher t){
	
	printf("Displaying Information\n");
	printf("Teacher name is %s.\n", t.name);
	printf("Teacher address is %s.\n",t.address);
	printf("Teacher subject is %s.\n",t.subject);
	printf("Teacher age is %d.\n",t.age);
	printf("Teacher salary is %d. \n",t.salary);
}

int main(){
	struct Teacher t1;
	struct Teacher t2;
	struct Teacher t3;
	
	puts("Enter Name:");
	gets(t1.name);
	puts("Enter Address:");
	gets(t1.address);
	puts("Enter Subject:");
	gets(t1.subject);
	printf("Enter Age:");
	scanf("%d",&t1.age);
	printf("Enter salary:");
	scanf("%d",&t1.salary);
	

	
	
	
	display(t1);
	
	
	return 0;
}



