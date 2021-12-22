#include <stdio.h>

int main(){
	
	
	if(remove("hii.txt") == 0){
		printf("File is deleted successfully.");
	}else{
		printf("Problem while deleting file.");
	}
	
	
	return 0;
}
