#include<stdio.h>
#include<conio.h>

main()
{
    char operator;
    int num1, num2;
    
    printf("\n\t   OPERATOR\n");                   //START HERE: To Display Operators
    printf("---------------------------------");   //
    printf("\n|   +\t|   -\t|   *\t|   /\t|\n");   //
    printf("---------------------------------");   //END-----------------------------

    printf("\nEnter the chosen operator: " );
    scanf("%c", &operator);
    printf("\nEnter the first integer number: ");
    scanf("%d", &num1);
    printf("Enter the second integer number: ");
    scanf("%d", &num2);

    switch(operator)
    {
        case '+': printf("\n%d + %d = %d", num1, num2, num1+num2); break;
        case '-': printf("\n%d - %d = %d", num1, num2, num1-num2); break;
        case '*': printf("\n%d * %d = %d", num1, num2, num1*num2); break;
        case '/': printf("\n%d / %d = %d", num1, num2, num1/num2); break;
        default: printf("WARNING: Invalid Operator");
    }
    getch();
    return 0;
}
