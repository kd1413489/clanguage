#include <stdio.h>
main()
{
	int m;
	printf("�������(�P�`�P�Q�œ���):");
	scanf("%d", &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("�ŏI���͂R�P���ł�\n");
	}
	else {
		if (m == 2) {
			printf("�ŏI���͂Q�W���ł�\n");
		}
		else {
			printf("�ŏI����30���ł�\n");
		}

	}
}