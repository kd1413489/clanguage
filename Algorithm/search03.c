#include<stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int s, low, mid, high;
	printf("’Tõ’l‚ğ“ü—ÍF");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		printf("low:%d mid:%d high:%d\n", low, mid, high);
		if (s == d[mid]) {
			break;
		}
	}
}