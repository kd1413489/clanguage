#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("���������͂��Ă��������F");
	scanf("%s", &s[0]);
	while (s[i] != '\n') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("�Í���������́A%s\n", s);
}
