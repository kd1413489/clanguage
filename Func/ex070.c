#include<stdio.h>
int add(int a, int b);
int 
main()
{
	int a, b, kotae;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", kotae);
}
