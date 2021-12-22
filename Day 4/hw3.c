// WAP that find character is vowel or not using function.
#include <stdio.h>

void vowel(){
	char n;
	printf("Input your character:");
	scanf("%c",&n);
	if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u'){
		
		printf("Vowel");
	}else{
		printf("Consonent");
	}
		}		


int main(){
	vowel();
	return 0;
}
