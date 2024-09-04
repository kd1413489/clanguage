#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", &s[0]);
	while (s[i] != '\n') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);
}
