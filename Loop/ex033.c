#include <stdio.h>
main()
{
	int i=0, k=0, su;
	printf("���́H ");
	scanf("%d", &su);
	for (; su != -999;) {
		k += su;
		i++;
		printf("���́H");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("���v��%d�@���ρ�%.2f", k, (float)k / i);
	}
}
