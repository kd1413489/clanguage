#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z')
	{
		printf("�ϊ������%c \n", c + 0x20);
	}
	else
	{
		if (c >= 'a' && c <= 'z')
		{
			printf("�ϊ������%c\n", c - 0x20);
		}
		else
		{
			printf("�G���[�F�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}
