#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main() {
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
									 {"�P�V�S��",50,2},
									 {"�t�f�o�R",500,3} };
	struct syohin_data* p = syohin;
	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("���i���F%s\t", p->name);
		printf("�P���F%4d\t", syohin[i].tanka);
		printf("���F%4d\n", syohin[i].kosuu);
	}
}