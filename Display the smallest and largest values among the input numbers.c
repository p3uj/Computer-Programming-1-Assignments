#include<stdio.h>
#include<conio.h>

main()
{
    int num1, num2, num3;

    printf("Enter the first integer number: ");
    scanf("%d", &num1);
    printf("Enter the second integer number: ");
    scanf("%d", &num2);
    printf("Enter the third integer number: ");
    scanf("%d", &num3);

    if ((num1 <= num2) && (num1 <= num3))               //START HERE: To find which number has the SMALLEST value//
        printf("\nThe smallest value is %d ", num1);    //
    else if ((num2 <= num1) && (num2 <= num3))          //
        printf("\nThe smallest value is %d ", num2);    //
    else                                                //
        printf("\nThe smallest value is %d ", num3);    //END----------------------------------------------------//
    if ((num1 >= num2) && (num1 >= num3))               //START HERE: To find which number has the LARGEST value-//
        printf("and largest value is %d ", num1);       //
    else if ((num2 >= num1) && (num2 >= num3))          //
        printf("and largest value is %d ", num2);       //
    else                                                //
        printf("and largest value is %d", num3);        //END----------------------------------------------------//
    getch();
    return 0;
}
