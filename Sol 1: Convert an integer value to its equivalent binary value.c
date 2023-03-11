#include<stdio.h>
int no, rem, quo, i, j, num;
int x[10];
main()
{  
    printf("Enter a number: ");
    scanf("%d", &no);
    while (no != 0)
    {  
        i=0;  // initialize the value of i to zero every new input
        num = no;  // preserve the value of no for later printing
        // control structure to convert dec to bin
        while (no != 0)
        {
            quo = no/2;
            rem = no%2;
            no = quo;
            x[i] = rem;
            i++;
        }
        // printing of the binary value
        printf("\n%d = ", num);
        for (j = i-1; j>=0; j--)
            printf("%d", x[j]);
        // Enter next number
        printf("\nEnter a number: ");
        scanf("%d", &no);
    }
    printf("End of program");
    return 0;
}
