#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0, n, k[]
		char s[21];
	srand(time(0));
	printf("文字列を入力してください：");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("暗号化文字列は%s\n");

}