// We have 4 subject [math, english, science, nepali].Canculate GPA from it using function.

#include <stdio.h>

grade_calculate(int mathMark, int sciMark, int nepaliMark, int socialMark){
	if(mathMark <=30 || sciMark<=30 || nepaliMark <=30 || socialMark<=30){
		printf("You don't have any grade.");
	}else{
		// If grade is more 
			int avg;
	avg = (mathMark + sciMark + nepaliMark + socialMark)/4;
	if(avg>=81 && avg<=100){
		printf("Grade A");
	}else if(avg>=61 && avg<=80){
		printf("Grade B");
	}else if(avg>=41 && avg<=60){
		printf("Grade C");
	}else if(avg>=31 && avg<40){
		printf("Grade D");
	}else{
		printf("Fail");
	}
	}
}

int main(){
	
		int math, sci, nep, social;
	printf("Enter your mark for math, sci, nepali and social(respectively):");
	scanf("%d %d %d %d", &math, &sci, &nep, &social);
	grade_calculate(math, sci, nep, social);
	
	
	return 0;
}
