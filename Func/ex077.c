#include<stdio.h>
void get_maxmin(int d1, int d2, int d3, int* max, int* min);
main()
{
	int d1, d2, d3, max, min;
	printf("�������R���́F");
	scanf("%d%d%d", &d1, &d2, &d3);
	get_maxmin(d1, d2, d3, &max, &min);
	printf("�ő�l = %d �ŏ��l = %d\n", max, min);
}

void get_maxmin(int d1, int d2, int d3, int* max, int* min)
{
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}
