#include<stdio.h>
main()
{
	int i, j, su;
	printf("���́H ");
	scanf("%d", &i);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j <= su - i);
		printf("\n");
		i--;
	} while (i <= su);
}