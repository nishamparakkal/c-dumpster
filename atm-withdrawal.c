#include<stdio.h>
int main()
{
	int amount,balance;
	printf("enter the account balance:\n");
	scanf("%d",&balance);
amount: printf("enter the withdrawal amount:\n");
	scanf("%d",&amount);

	if(amount<=balance && amount >=0)
	{
		if(amount%100==0)
			printf("Transaction successful\n");
		else
		{	printf("Enter amount that is multiples of 100\n");
		goto amount;}
	}

	else if(amount>balance)
		printf("Insufficient Balance\n");

	else
		printf("Enter a valid amount\n");


	return 0;
}
