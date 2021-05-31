#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
#pragma warning (disable: 6031)

void printArr(int value[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d", value[i]);
		printf("\n");
	}
}
void selectionSort(int* value, int n) {
	int i, j, min = 0, temp = 0;
	for (i = 0; i < n - 1; i++) {
		min = i; //ÀÎµ¦½º
		for (j = 1 + i; j < n; j++) {
			if (value[min] > value[j]) {
				min = j;
			}
		}
		temp = value[i];
		value[i] = value[min];
		value[min] = temp;
	}
}

int main() {
	int value[] = { 4,7,9,11,3,7,6 };
	int n = sizeof(value) / sizeof(int);
	printArr(value, n);
	selectionSort(value, n);
	printArr(value, n);
	return 0;
}