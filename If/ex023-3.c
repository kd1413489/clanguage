#include <stdio.h>
main()
{
	int h, m, s;
	printf("���Z�q�����:");
	scanf("%d", &h);
	printf("�Q�̐��������:");
	scanf("%d %d", &m, &s);
	if (h == 1) {
		printf("%d \n", m + s);
	}
	else{
		if (h == 2) {
			printf("%d \n", m - s);
		}
		else {
			if (h == 3) {
			   printf("%d \n", m * s);
			   }
			else {
				if (h == 4) {
				   printf("%d \n", m / s);
				   }
				}
			}
	    }
}

