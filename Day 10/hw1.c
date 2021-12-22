// We have 4 subject [math, english, science, nepali].Canculate GPA from it using function.

#include <stdio.h>

float gradeA(avg){
	printf("GradeA");
	return 0;
}
float gradeB(avg){
	printf("GradeB");
	return 0;
}
float gradeC(avg){
	printf("GradeC");
	return 0;
}
float gradeD(avg){
	printf("GradeD");
	return 0;
}

int main(){
	int math, english, science, nepali;
	printf("Enter your mark for math, english, science and nepali(respectively):");
	scanf("%d %d %d %d", &math, &english, &science, &nepali);
	if(math<=30 || english<=30 || science<=30 || nepali<=30){
		printf("Fail");
		return 0;
	}
	
	int avg;
	avg = (math + english + science + nepali)/4;
	if(avg>=81 && avg<=100){
		gradeA(avg);
	}else if(avg>=61 && avg<=80){
		gradeB(avg);
	}else if(avg>=41 && avg<=60){
		gradeC(avg);
	}else if(avg>=31 && avg<40){
		gradeD(avg);
	}else{
		printf("Fail");
	}
	
	return 0;
}


