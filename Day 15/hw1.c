// WAP in c that stores book information using structure and print info using function.


#include <stdio.h>
#include <string.h>


struct library{
	char name[20];
	float price;
	int pages;
	char category[20];
		
};

void display(struct library b){
	printf("\tLibrary Information:\n");
	printf("Book Name is:%s\n", b.name);
	printf("Book Price is:%.2f\n", b.price);
	printf("Book total page is:%d\n", b.pages);
	printf("Book category is:%s\n", b.category);
}



int main(){
	struct library b1;
	struct library b2;
	
	puts("Enter Book Name:");
	gets(b1.name);
	puts("Enter price:");
	scanf("%f",&b1.price);
	puts("Enter Pages");
	scanf("%d",&b1.pages);
	printf("Enter category:\n");
	scanf("%s",b1.category);
		
	display(b1);
		
	return 0;
}
