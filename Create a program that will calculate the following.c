#include<stdio.h>
int day, miles, rate;
main()
{  
	rate=21; miles=50;
	printf("    Day         Rate        Miles\n\n");
	while (miles < 200)
	{
		day++;
		rate = rate -1;
		miles = (miles + rate) -2;
		printf("  %3d          %3d            %3d\n", day,rate,miles);
	}
	if (day < 13)
		printf("\n\nBareng reached civilization on the %dth day",day);
	else
		printf("\n\nBareng died on the %dth day",day);
	return 0;
}
