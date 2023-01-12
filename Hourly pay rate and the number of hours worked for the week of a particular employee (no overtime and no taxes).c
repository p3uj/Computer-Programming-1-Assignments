#include<stdio.h>
float payRate, hourWorked, weeklyPay;
main()
{
    // INPUT PROCESS
    printf("\tWEEKLY PAY OF AN EMPLOYEE\n");
    printf("Enter the hourly pay rate: ");
    scanf("%f", &payRate);
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hourWorked);

    // PROCESSING
    weeklyPay = hourWorked * payRate;

    // OUTPUT
    printf("\nThe wage of an employee is %0.2f", weeklyPay);

    return 0;
}
