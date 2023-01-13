#include<stdio.h>
#include<conio.h>
int num;
main()
{  
    printf("Enter a number: ");
    scanf("%d", &num);
    if ( num == 0)
        printf("The number %d is ZERO!", num);
    else if (num % 2 !=  0)
        printf("The number %d is an odd number", num);
    else
        printf("The number %d is an even number", num);
    getch();
    return 0;
}
