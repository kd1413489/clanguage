#include <stdio.h>
main()
{
	int no;
	printf("西暦を入力:");
	scanf("%d", &no);
	if (no < 1989) {
		printf("昭和以前の生まれです\n");
	}
	else {
		printf("平成以降の生まれです\n");
	}
}
