#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 50;
	b = 10;
	p_a = &a;  //a‚ÌƒAƒhƒŒƒX‚P‚O‚O‚O‚ğ*p_a‚ÉŠi”[
	p_b = &b;  //b‚ÌƒAƒhƒŒƒX‚P‚O‚O‚S‚ğ*p_b‚ÉŠi”[
	c = *p_a + *p_b;
	printf("%d + %d = %d\n", a, b, c);
}
