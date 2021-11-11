#include <stdio.h>
#pragma warning (disable:4996)
/*#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]

void makearr(int n) {
	int cnt = 1 ; //1,2,3,4
	int row = 0, col = -1;
	int inc = 1;//인덱스 증가 감소, 1, -1
	while (n > 0)
	{
		for (int i = 0; i < n; i++) {
			col += inc;
			arr[row][col] = cnt++;
		}
		n--; // 두번돌리고 --
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
	printf("달팽이 배열의 길이 : ");
	scanf("%d", &n);
	makearr(n); //달팽이 배열 만들기
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
	for (int i = 0; i < len - 1; i++) { //4번검사
		for (int j = 0; j < len - i - 1; j++) { // 4번검사하며 오른쪽 수가 크다면 자리바꿈
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}