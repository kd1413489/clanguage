#include<stdio.h>
main()
{
	int su, gokei;
	gokei = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &su);
		if (su == -999)break;
		gokei += su;
		printf("‡Œv%d\n", gokei);
	}
}
