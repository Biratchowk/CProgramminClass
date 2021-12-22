 //WAP in C to store computer information[name, modelno, ram] and store them in array of structure and print result. [3]

#include <stdio.h>
#include <string.h>


struct computer{
	char name[30];
	int modelNo;
	int ram;
	
};

void display(struct computer info){
	printf("\t\t\tComputer Information is as followings:\n");
	printf("Computer Name is: %s\n",info.name);
	printf("Computer Model No is: %d\n",info.modelNo);
	printf("Computer Ram is: %d \n",info.ram);
}

int main(){
	int i;
	struct computer info[3];
	printf("Enter three details of computer:\n");
	
	for(i=0; i<1; i++){
		int result = i + 1;
		printf("Enter computer's Name:\n",result);
		scanf("%s",info[i].name);
		printf("Enter computer's Model no:\n",result);
		scanf("%d",&info[i].modelNo);
		printf("Enter computer's Ram:\n",result);
		scanf("%d",&info[i].ram);
		
		
	}
		for(i=0; i<1; i++){
		display(info[i]);
		}
	
	return 0;
}
