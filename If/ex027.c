#include<stdio.h>
main()
{
	char c;
	printf("文字を入力:");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z')
	{
		printf("変換すると%c \n", c + 0x20);
	}
	else
	{
		if (c >= 'a' && c <= 'z')
		{
			printf("変換すると%c\n", c - 0x20);
		}
		else
		{
			printf("エラー：アルファベットを入力してください\n");
		}
	}
}
