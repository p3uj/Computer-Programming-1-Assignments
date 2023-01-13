// Division result is an integer
#include<stdio.h>
#include<conio.h>
int num1, num2;
char optr;
main()
{  
    printf("Enter the first number: ");
    scanf("%d", &num1);     // 5
    printf("Enter the second number: ");
    scanf("%d", &num2);     // 2
    printf("Enter a +, -, *, / operator: ");
    scanf("\n");
    scanf("%c", &optr);
    switch (optr)
    {
        case '+' : printf("%d + %d = %d", num1, num2, num1 + num2); break;
        case '-' : printf("%d -%d = %d", num1, num2, num1 -num2); break;
        case '*' : printf("%d * %d = %d", num1, num2, num1 * num2); break;
        case '/' : printf("%d / %d = %d", num1, num2, num1 / num2); break;
        default  : printf("Input error");
    }
    getch();
    return 0;
}
