#include<stdio.h>
main()
{
	float@sum, box[3];
	int i;
	for (sum = 0, i = 0; i < 3; i++) {
		printf("À”‚ğ“ü—Í:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("‡Œv‚Í %.2f‚Å‚·\n•½‹Ï‚Í %.2f‚Å‚·\n", sum, sum / 3);
}
