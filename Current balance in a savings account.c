#include<stdio.h>

//DESIGN----------------------------------------------
void design()
{
	for (int i = 0; i < 50; i++)
	{
		printf("-");
	}
}
//END-------------------------------------------------

main()
{
	//INITIALIZE VARIABLES
	int starting_balance = 2000, deposit, withdraw, current_balance;

	design();
	printf("\n\t\tSAVINGS ACCOUNT\n");
	design();
	printf("\nStarting Balance: %d\n", starting_balance);
	design();
	
	//INPUT PROCESS
	printf("\n\nEnter the total amount to be deposited: ");
	scanf("%d", &deposit);
	printf("\nEnter the total amount to be withdrawn: ");
	scanf("%d", &withdraw);
	
	//PROCESSING
	current_balance = starting_balance + deposit - withdraw;
	
	//OUTPUT
	printf("\n");
	design();
	printf("\nCurrent Balance: %d\n", current_balance);
	design();
	
	return 0;
}
