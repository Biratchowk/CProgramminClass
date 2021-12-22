// Multi dimentional Array in c

#include <stdio.h>
int main(){
	
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[2][3] = {{1,2,3},{1,2,3}};
	int sum[2][3];
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
		
	// printing the result
	printf("The result is \n");
	printf("%d\t%d\t%d\n",sum[0][0], sum[0][1], sum[0][2]);
	printf("%d\t%d\t%d",sum[1][0], sum[1][1], sum[1][2]);
	return 0;
}
