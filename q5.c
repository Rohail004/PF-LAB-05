#include <stdio.h>

int main(){
	
	int x,y,z,highest;
	printf("please enter marks of 3 students\n");
	scanf("%d %d %d", &x, &y, &z);

    highest = (x > y) ? (x > z) ? x : z : (y > z) ? y : z;


	printf("the highest marks are %d", highest);
	return 0;
	
}
