// 1. WAP In C that sort numbers in decending order. user input

#include <stdio.h>

int main(){
	int num;
	printf("Enter how many number:");
	scanf("%d",&num);
	int num1[num];
	int i, j;
	for(i=0; i<num; i++){
		printf("Enter the index:");
		scanf("%d",&num1[i]);
		
}
	for(i=0; i<num; i++){
		for(j=i+1; j<num; j++){
			if(num1[i]>num1[j]){
				int temp = num1[i];
				num1[i] = num1[j];
				num1[j] = temp;
			}
		}
	
	}
		for(i=0; i<num; i++){
			printf("%d\n",num1[i]);
		}
	
	
	return 0;
}
