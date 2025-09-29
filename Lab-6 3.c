#include <stdio.h>

int main()
{
	int balance = 1000;
	int withdraw;
	printf("Please enter withdrawl amount ");
	scanf("%d", &withdraw);
	while(withdraw > balance)
	{
		printf("Insufficient balance, Please enter withdrawl amount again");
		scanf("%d", &withdraw);
	}
	balance -= withdraw;
	printf("Transaction succesfull, your remaining balance is %d", balance);
	return 0;
}
