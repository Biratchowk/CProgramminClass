#include <stdio.h>
int main(){
	int numberofitem;
	printf("Enter how many item you want: ");
	scanf("%d",&numberofitem);
	int price[numberofitem];
	
	// Getting input from user
int i;
for(i=0; i<numberofitem; i++){
	printf("Enter value at index %d: ",i);
	scanf("%d",&price[i]);
}
// printing
for(i=0; i<numberofitem; i++){
printf("Value at %d is %d\n",i, price[i]);	
}
	
	return 0;
}


