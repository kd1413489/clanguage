#include <stdio.h>
main()
{
	int m;
	printf("�O����P�O�O�܂ł̐���:");
	scanf("%d", &m);
	if (m >=90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�\n");
	}
	else {
		if (m >= 80) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�\n");
		}
		else {
			if (m >= 50) {
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�\n");
			}
			else {
				if (m >= 30) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u�P�v�ł�\n");
				     }
				}
			}
		}
}