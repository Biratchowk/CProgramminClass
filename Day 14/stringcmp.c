#include <stdio.h>
#include <string.h>

int main(){
	
	char address1[10], address2[10];
	printf("Enter fname:");
	scanf("%s",address1);
	printf("Enter address2:");
	scanf("%s",address2);
	int result;
	printf("%d",result);
	printf("Reverse of string is %s",strrev(address1));
	result = strcmp(address1,address2);
	if(result==0){
		printf("Your address is same.");
	}else{
		printf("Your address is not same.");
	}
	
	
	
	
	return 0;
}
