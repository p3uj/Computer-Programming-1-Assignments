#include<stdio.h>
#include<conio.h>

main()
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num == 0)
        {
            printf("The number %d is ZERO!", num);
            goto stop;
        }
    if (num % 2 == 1)
        printf("The number %d is an odd number!", num);
    if (num % 2 != 1)
        printf("The number %d is an even number!", num);
    stop:
    getch();
    return 0;
}
