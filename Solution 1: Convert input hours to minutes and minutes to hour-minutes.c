#include<stdio.h>

main()
{
	float hours;
	int minutes;

	printf("Enter number of hours: ");
	scanf("%f", &hours);
	printf("%0.2f hour/s is %0.0f minute/s\n\n", hours, hours * 60);	// convertion of hours to minutes and display the result.

	printf("Enter number of minutes: ");
	scanf("%d", &minutes);
	printf("\n%d minutes is %d hours/s and %d minute/s", minutes, minutes / 60, minutes % 60);	// convertion of minutes to hours-minutes and display the result.
	return 0;
}
