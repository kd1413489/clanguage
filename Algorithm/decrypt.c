#include<stdio.h>
main()
{
	char s[20];
	int i = 0;
	printf("�Í������������́F");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] -= 1;
		i++;
	}
	printf("�����ϕ������%s\n", s);
}
