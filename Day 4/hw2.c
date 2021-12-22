// WAP in c that find whether a character is vowel is
// consonant.

//char name = 'a';
//if(name =='a' || name =='e' || name == 'i'){
//	print("Vowel")
//}

#include <stdio.h>

int main(){
	char name;
	printf("Enter the character:");
	scanf("%c",&name);
	if(name =='a' || name == 'A' || name =='e' || name == 'E' || name =='i' || name == 'I' || name =='o' || name == 'O'|| name =='u' || name == 'U'){
	printf("The character is \t''Vowel''.");
	
	}else{
		printf("The character is \t''Consonant''.");
	}
	
	
	
	
	
	return 0;
}
