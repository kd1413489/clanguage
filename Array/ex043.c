#include<stdio.h>
#include<string.h>
main()
{
	char str[] = "orange";
	int cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("文字列：%s\n", str);
	printf("文字数は%d文字\n", cnt);
	printf("文字数は%d文字\n", strlen(str));
}

