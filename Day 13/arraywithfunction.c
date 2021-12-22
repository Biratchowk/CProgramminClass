#include <stdio.h>

float findSum(int nums[]){
float sum = 0;
int i;
for(i=0; i<3; i++){
	sum = sum + nums[i];
}

return sum;
	
}

int main(){

	int numbers[] = {10, 20,10};
	float total = findSum(numbers);
	printf("The sum is %f",total);
	
	

return 0;
}






