#include <stdio.h>
main()
{
	int m;
	printf("Œ‚ğ“ü—Í(‚P`‚P‚Q‚Å“ü—Í):");
	scanf("%d", &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("ÅI“ú‚Í‚R‚P“ú‚Å‚·\n");
	}
	else {
		if (m == 2) {
			printf("ÅI“ú‚Í‚Q‚W“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}

	}
}