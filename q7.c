#include <stdio.h>

int main(){
	int attendence;
	char option;
	
	
	
	printf("please enter your attendence percentage 0 to 100 ");
	scanf(" %d", &attendence);
	if (attendence < 75){
		printf("not eligible for final examination");
	}
	else 
	{
		printf("have you cleared your midterm exams? P for Pass, F for Fail ");
		scanf(" %c", &option);
		if (option == 'F' || option == 'f'){
			printf("not eligible");
		}
		else
		{
		if (option == 'P' || option == 'p'){
			printf("have you paid your exam fees Y for Yes, N for no ");
			scanf(" %c", &option); 
			if (option == 'n' || option == 'N'){
				printf("clear your dues first");
			}
			else{
				if (option == 'Y'|| option == 'y'){
					printf("you are eligible for the final examination");
				}
				else{
					printf("invalid");
				}
			}
		}
		else{
			printf("invalid character");
		}
		}
	}
}
