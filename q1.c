#include <stdio.h>

int main(){
	char c1,c2,c3;
	int consonants = 0;
	int vowels = 0;
	
	
	printf("enter character 1 ");
	scanf("%c", &c1);
	printf("enter character 2 ");
	scanf(" %c", &c2);
	printf("enter character 3 ");
	scanf(" %c", &c3);
	
	if (c1 == 'a' || c1 == 'A' || c1 == 'e' || c1 == 'E' || c1 == 'I' || c1 == 'i' || c1 == 'o' || c1 == 'O' || c1 == 'u' || c1 == 'U'){
		vowels++;
	}
	else {
		consonants = consonants +1;
	}
	if (c2 == 'a' || c2 == 'A' || c2 == 'e' || c2 == 'E' || c2 == 'I' || c2 == 'i' || c2 == 'o' || c2 == 'O' || c2 == 'u' || c2 == 'U'){
		vowels++;
	}
	else {
		consonants++;
	}
	if (c3 == 'a' || c3 == 'A' || c3 == 'e' || c3 == 'E' || c3 == 'I' || c3 == 'i' || c3 == 'o' || c3 == 'O' || c3 == 'u' || c3 == 'U'){
		vowels++;
	}
	else {
		consonants++;
	}
	printf("vowels %d, consonants %d", vowels, consonants);
}
