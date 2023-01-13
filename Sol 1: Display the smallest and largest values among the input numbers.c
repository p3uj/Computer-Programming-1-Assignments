#include<stdio.h>
#include<conio.h>
int a, b, c, small, large;
main()
{   
    printf("Enter first integer value: ");
    scanf("%d", &a);
    printf("Enter second integer value: ");
    scanf("%d", &b);
    printf("Enter third integer value: ");
    scanf("%d", &c);
    if ( a > b && a > c)
    {   
        large = a;
        if ( b > c)
            small = c;
        else
            small = b;
    }
    else if ( b > a && b > c)
    {   
        large = b;
        if ( a > c)
            small = c;
        else
            small = a;
    }
    else if ( c > a && c > b)
    {   
        large = c;
        if ( a > b)
            small = b;
        else
            small = a;
    }
    printf("The largest value is %d\n", large);
    printf("The smallest value is %d\n", small);
    getch();
    return 0;
}
