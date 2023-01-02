#include<stdio.h>

float hours;
int conHrsMin, minutes, conMinHrs, remMinutes;	

main()
{	
	//INPUT PROCESS1
	printf("Enter number of hours: ");
	scanf("%f", &hours);
	
	//PROCESSING1
	conHrsMin = hours * 60;	// convertion of hours to minutes
	
	//OUTPUT1
	printf("%0.2f hour/s is %d minute/s\n\n", hours, conHrsMin);
	
	//INPUT PROCESS2
	printf("Enter number of minutes: ");
	scanf("%d", &minutes);
	
	//PROCESSING1
	conMinHrs = minutes / 60;		// convertion of minutes to hours
	remMinutes = minutes % 60;		// remainter of minutes
	
	//OUTPUT1
	printf("\n%d minutes is %d hour/s and %d minute/s", minutes, conMinHrs, remMinutes);
	return 0;
}
