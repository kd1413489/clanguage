#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 50;
	b = 10;
	p_a = &a;  //a�̃A�h���X�P�O�O�O��*p_a�Ɋi�[
	p_b = &b;  //b�̃A�h���X�P�O�O�S��*p_b�Ɋi�[
	c = *p_a + *p_b;
	printf("%d + %d = %d\n", a, b, c);
}
