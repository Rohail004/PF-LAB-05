#include <stdio.h>

main(){
	char option;
	char option2;
	
	printf("what is the color of the traffic light? R for red, G for Green, Y for yellow \n");
	scanf("%c", &option);
	if (option == 'R' || option =='r' ){
		printf("is time above 22:00? y for yes , n for no ");
		scanf(" %c" , &option2);
		if (option2 == 'y'|| option2 == 'Y'){
			printf("stop, but be night cautious ");
		}
		else{
			if (option2 == 'n' || option2 == 'N'){
				printf("stop and wait");
			}
		}
	}
	else if (option == 'y' || option == 'Y'){
			printf("get ready");
		
	}
	else if (option == 'G'|| option == 'g'){
			printf("GO!!");
		
	}
	else{
		printf("invalid character");
	}
}
