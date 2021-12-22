#include <stdio.h>
#include <string.h>

struct Student{
	char name[25];
	int roll;
};

void display(struct Student c){
	printf("Student Name is:%s\n", c.name);
	printf("Student Roll is:%d\n", c.roll);

}

int main(){
	int i;
	struct Student st[5];
	printf("Enter details of 5 Sts:\n");
	for(i=0; i<5; i++){
		int resulttoshow = i +1;
		printf("Enter name %d: ",resulttoshow);
		scanf("%s",st[i].name);
		printf("Enter Roll %d: ",resulttoshow);
		scanf("%d",&st[i].roll);
	}
	
		for(i=0; i<5; i++){
		display(st[i]);
		}
	
	
	return 0;
}


 
 
 
