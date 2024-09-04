#include <stdio.h>
main()
{
	int m;
	printf("０から１００までの整数:");
	scanf("%d", &m);
	if (m >=90) {
		printf("その数値の判定結果は「５」です\n");
	}
	else {
		if (m >= 80) {
			printf("その数値の判定結果は「４」です\n");
		}
		else {
			if (m >= 50) {
				printf("その数値の判定結果は「３」です\n");
			}
			else {
				if (m >= 30) {
					printf("その数値の判定結果は「２」です\n");
				}
				else {
					printf("その数値の判定結果は「１」です\n");
				     }
				}
			}
		}
}