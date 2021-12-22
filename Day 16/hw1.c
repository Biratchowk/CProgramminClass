 //WAP in C to store computer information[name, modelno, ram] and store them in array of structure and print result. [3]
 
 #include <stdio.h>
 #include <string.h>

struct computer{
	char name[25];
	int modelNo;
	int ram;
};

void display(struct computer info){
	printf("Computer's Name is:%s\n", info.name);
	printf("Computer's Model no is:%d\n", info.modelNo);
	printf("Computer's Ram is:%d\n", info.ram);

}

int main(){
	int i;
	struct computer info[3];
	printf("Enter 3 details of computer info:\n");
	for(i=0; i<3; i++){
		int result = i + 1;
		printf("Enter Name:\n ",result);
		scanf("%s",info[i].name);
		printf("Enter modelNo:\n ",result);
		scanf("%d",&info[i].modelNo);
		printf("Enter Ram:\n",result);
		scanf("&d",&info[i].ram);
	}
	
		for(i=0; i<3; i++){
		display(info[i]);
		}
	
	
	return 0;
}
