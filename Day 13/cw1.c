#include <stdio.h>

int main(){
	int a[3][3] = {{1,2,3},{2,3,4},{5,6,7}};
	int b[3][3] = {{2,1,1},{1,2,1},{1,2,3}};
	int sub[3][3];
	int i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		
		sub[i][j] = a[i][j] - b [i][j]; 
	}
	}
	printf("The result is\n");
	printf("%d\t %d\t %d\n",sub[0][0], sub[0][1], sub[0][2]);
	printf("%d\t %d\t %d\n", sub[1][0], sub[1][1], sub[1][2]);
	printf("%d\t %d\t %d\n", sub[2][0], sub[2][1], sub[2][2]);
	
	
	
	
	
	
	return 0;
}
