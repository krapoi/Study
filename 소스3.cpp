#include <stdio.h>
#pragma warning (disable:4996)
/*#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]

void makearr(int n) {
	int cnt = 1 ; //1,2,3,4
	int row = 0, col = -1;
	int inc = 1;//�ε��� ���� ����, 1, -1
	while (n > 0)
	{
		for (int i = 0; i < n; i++) {
			col += inc;
			arr[row][col] = cnt++;
		}
		n--; // �ι������� --
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			row += inc;
			arr[row][col] = cnt++;
		}
		inc *= -1;//1 -- > -1 -- > 1 -- > -1
	}
}
void printarr(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}*/
void BubbleSort(int arr[], int len);
int main() {
	/*int n = 0;
	printf("������ �迭�� ���� : ");
	scanf("%d", &n);
	makearr(n); //������ �迭 �����
	printarr(n);*/

	int arr[5] = { 4,6,1,3,9 };
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
void BubbleSort(int* arr,int len){
	int temp;
	for (int i = 0; i < len - 1; i++) { //4���˻�
		for (int j = 0; j < len - i - 1; j++) { // 4���˻��ϸ� ������ ���� ũ�ٸ� �ڸ��ٲ�
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}