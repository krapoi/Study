#include <stdio.h>
#define NUM 20
int main() {
	/*int a[20] = { 35,26,48,77,56,99,75,78,99,0,
		43,56,67,84,99,100,45,37,49,78 };

	int i, range, histo[11] = { 0, };
	for (i = 0; i < NUM; i++) {
		histo[a[i] / 10]++;

	}
	for (i = 0; i <= 10; i++) {
		printf("%3d :  ", i * 10, histo[i]);
		for (int j = 0; j < histo[i]; j++) {
			printf("*");
		}printf("\n");
	}*/
	int scores[10] = {
		95,64,78,94,65,71,72,59,45,78
	};
	int rank[102] = { 0, };
	int i, j;
	for (i = 0; i < 10; i++) {
		rank[scores[i]]++; // ��ũ i �� ���ھ� i �� ����
		rank[101] = 1; // rank�� 1�� ����
	for (i = 100; i >= 0; i--) {
		rank[i] = rank[i] + rank[i + 1]; // 1�� ��ũ ���ϱ� 1 �� ����
		printf("�й� ���� ���\n");
		for (i = 0; i < 10; i++) {
			printf("%3d %5d %d\n", i + 1, scores[i], rank[scores[i] + 1]); // ��ũ +1
		}
	}
	}
	/*int rank[10] = { 0, };
	int i, j;
	for (i = 0; i < 10; i++) {
		rank[i] = 1;
		for (j = 0; j < 10; j++) {
			if (scores[i] < scores[j]) {
				rank[i]++;
			}
		}
		
	}
	printf("�л����\n");
	for (i = 0; i < 10; i++) {
		printf("�й� %3d, ���:%3d\n", i + 1, rank[i]);
	}*/
	return 0;
}