// WAP in c that finds sum of multi dimentional array  using function.

#include <stdio.h>
void sumTotal(int a[2][3], int b[2][3]){
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


int main(){
	int c[2][3] = {{1,1,1},{2,2,2}};
	int d[2][3] = {{3,3,3},{4,4,4}};

sumTotal(c,d);


	return 0;
}
