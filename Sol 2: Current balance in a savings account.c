#include<stdio.h>
float bb, deposit, withdrawal, balance;     //16 bytes
main()
{ 
    printf("Enter beginning balance: ");
    scanf("%f", &bb);
    printf("Enter deposits made: ");
    scanf("%f", &deposit);
    printf("Enter withdrawals made: ");
    scanf("%f", &withdrawal);
    
    balance = bb+deposit-withdrawal;
    
    printf("The current account balance is %0.2f", balance);
    return 0;
}
