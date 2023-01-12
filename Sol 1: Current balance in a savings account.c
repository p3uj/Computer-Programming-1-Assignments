#include<stdio.h>
float bb, deposit, withdrawal;      //12 bytes
main()
{ 
    //Input
    printf("Enter beginning balance: ");
    scanf("%f", &bb);
    printf("Enter deposits made: ");
    scanf("%f", &deposit);
    printf("Enter withdrawals made: ");
    scanf("%f", &withdrawal);
    
    printf("The current account balance is %0.2f", bb+deposit-withdrawal);
    return 0;
}
