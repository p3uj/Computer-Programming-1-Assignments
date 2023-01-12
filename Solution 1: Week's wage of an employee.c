#include<stdio.h>
#include<conio.h>

main()
{
    float hworked, hrate; 

    printf("Enter the hours worked: ");
    scanf("%f", &hworked);
    printf("Enter the hourly rate: ");
    scanf("%f", &hrate);
	if (hworked > 40)
        printf("\nThe wage of the employee is: %0.2f", (40*hrate)+(hworked-40)*(hrate*1.5));
    else
        printf("\nThe wage of the employee is %0.2f", hworked*hrate);
	getch();
    return 0;
}
