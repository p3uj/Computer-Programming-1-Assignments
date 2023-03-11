#include<stdio.h>
int no, i, num;
int x[10];
main()
{  
    printf("Enter a number: ");
    scanf("%d", &no);
    while (no != 0)
    {
        num = no; // preserve the value of no for later printing
        // control structure to convert dec to bin
        for (i=0; no>0; i++)
        {  
            x[i] = no%2;
            no = no/2;
        }
        // printing of the binary value
        printf("\n%d = ", num);
        for (i= i-1; i>=0; i--)
            printf("%d", x[i]);
        // Enter next number
        printf("\nEnter a number: ");
        scanf("%d", &no);
    }
    printf("End of program");
    return 0;
}
