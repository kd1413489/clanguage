#include<stdio.h>
main()
{
	char moji1[40], moji2[40];
	int i;
	i = 0;
	printf("������P����́F");
	scanf("%s", &moji1[0]);
	printf("������Q����́F");
	scanf("%s", &moji2[0]);
	printf("moji1=%s moji2=%s\n", moji1, moji2);
	//moji1�̔z��v�f��w�ɃR�s�[����
	i = 1;
	while (moji1[i] != '\0') {
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
	//moji2�̔z��v�f��moji1�ɃR�s�[����
	i = 1;
	while (moji1[i] != '\0') {
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
	//w�̔z��v�f��moji2�ɃR�s�[����
	i = 0;
	while (w[i] != '\0') {
		moji2[i] = w[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
}
