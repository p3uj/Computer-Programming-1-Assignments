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
    if (( a > b && a > c) && ( b > c))
    {  
        large = a;
        small = c;
    }
    else if ((a > b && a > c) && ( c > b))
    {   
        large = a;
        small = b;
    }
    if (( b > a && b > c) && ( a > c))
    {  
        large = b;
        small = c;
    }
    else if ((b > a && b > c) && ( c > a))
    {   
        large = b;
        small = a;
    }
    if (( c > a && c > b) && ( a > b))
    {  
        large = c;
        small = b;
    }
    else if ((c > a && c > b) && ( b > a))
    {   
        large = c;
        small = a;
    }
    printf("The largest value is %d\n", large);
    printf("The smallest value is %d\n", small);
    getch();
    return 0;
}
