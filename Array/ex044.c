#include<stdio.h>
main()
{
	char moji1[40], moji2[40];
	int i;
	i = 0;
	printf("文字列１を入力：");
	scanf("%s", &moji1[0]);
	printf("文字列２を入力：");
	scanf("%s", &moji2[0]);
	printf("moji1=%s moji2=%s\n", moji1, moji2);
	//moji1の配列要素をwにコピーする
	i = 1;
	while (moji1[i] != '\0') {
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
	//moji2の配列要素をmoji1にコピーする
	i = 1;
	while (moji1[i] != '\0') {
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
	//wの配列要素をmoji2にコピーする
	i = 0;
	while (w[i] != '\0') {
		moji2[i] = w[i];
		i++;
	}
	w[i] = '\0';
	printf("w=%s\n", w);
}
