// Division result is a float value (variable casting)
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
        case '/' : printf("%d / %d = %0.2f", num1, num2, (float)num1 / num2); break;    // 2.50
        default  : printf("Input error");
    }
    getch();
    return 0;
}
