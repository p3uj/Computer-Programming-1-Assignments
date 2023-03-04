// Using for control structure
#include<stdio.h>
int drops, cat, hr;
main()
{ 
	hr=0;
	printf("       HOUR            DROPS\n\n");
	for (drops=162; drops < 2452; drops+=162)
	{
		hr++;
		if (hr%3 == 0)
		{
			cat = cat + 28;
			drops = drops -28;
		}
		printf("   %3d              %3d\n",hr,drops);
	}
	printf("\n\nThe cat drank %d drops of wine",cat);
	return 0;
}
