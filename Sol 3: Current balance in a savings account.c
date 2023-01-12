#include<stdio.h>
float bb, trans;    // 8 bytes
main()
{ 
    //Input
    printf("Enter beginning balance: ");
    scanf("%f", &bb);
    printf("Enter deposits made: ");
    scanf("%f", &trans);
    
    bb = bb + trans;  
    
    printf("Enter withdrawals made: ");
    scanf("%f", &trans);
    bb  = bb -trans;
    
    printf("The current account balance is %0.2f", bb);
    return 0;
}
