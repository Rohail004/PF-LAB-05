#include <stdio.h>

int main(){
int num1;

printf("enter a number ");
scanf("%d", &num1);
num1%2 == 0 ? printf("even") : num1%3 == 0 ? printf("odd") : printf("not divisible by 3");
return 0;
}
