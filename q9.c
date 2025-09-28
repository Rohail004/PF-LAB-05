#include <stdio.h>

int main(){
	int pin = 1234;
	int entered_pin;
	int balance = 5000;
	int amount;
	int new_bal;
	
	printf("please input your 4 digit pin ");
	scanf("%d", &entered_pin);
	if (entered_pin == pin){
		printf("welcome to xyz bank.\nplease input the amount you want to withdraw ");
		scanf("%d", &amount);
		if (amount >= balance){
			printf("insufficient balance");
		}
		else
		{
			new_bal = balance - amount;
			printf("your transaction was completed, your new balance is %d", new_bal);
		}
		
	}
	else
	{
		printf("incorrect pin");
	}
}
