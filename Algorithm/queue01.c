#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;
void display(void);
int enqueue(int d);
int dequeue(int* pd);
main() {
	int key, data, result;
	do {
		printf("\n\n　エンキューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");
	}
}