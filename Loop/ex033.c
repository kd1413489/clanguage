#include <stdio.h>
main()
{
	int i=0, k=0, su;
	printf("数は？ ");
	scanf("%d", &su);
	for (; su != -999;) {
		k += su;
		i++;
		printf("数は？");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("合計＝%d　平均＝%.2f", k, (float)k / i);
	}
}
