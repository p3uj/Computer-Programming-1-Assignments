// Using while control structure
#include<stdio.h>
int drops, cat, hr;
main()
{ 
	hr=0;
	printf("       HOUR            DROPS\n\n");
	while (drops < 2452)
	{
		hr++;
		if (hr%3 == 0)
		{
			cat = cat + 28;
			drops = drops + 162 - 28;
		}
		else
			drops = drops + 162;
		printf("   %3d              %3d\n",hr,drops);
	}
	printf("\n\nThe cat drank %d drops of wine",cat);
	return 0;
}
