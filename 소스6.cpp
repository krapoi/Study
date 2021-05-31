#include <stdio.h>
#pragma warning (disable:4996)
#define MAX 100
char arr[MAX][MAX];
int main() {
	//int col = 0;
	//int row = 0;
	//int inc = 1;
	//int n = 0;
	//int cnt = 0;
	//int b = 2;
	//scanf("%d", &n);
	//while (b > 0)
	//{

	//	for (int i = 0; i < n; i++) {
	//		col += inc;
	//		arr[row][col] = '*';
	//	
	//	}
	//	for (int j = 0; j < n; j++) {
	//		row += inc;
	//		arr[row][col] = '*';

	//	}
	//b--;
	//	if (b <= 0) {
	//		break;
	//	}

	//inc *= -1;
	//}
	//for (int i = 0; i <= n; i++) {
	//	for (int j = 0; j <= n; j++) {
	//		printf("%c", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	int arr[3][4];
	int n = 0;
	int pass = 0;
	for (int i = 0; i < 3; i++) {
		
		for (int j = 0; j < 4; j++) {

			scanf("%d", &n);
			arr[i][j] = n;

		}
		
	}
	for (int o = 0; o < 3; o++) {
		if ((arr[o][0] + arr[o][1] + arr[o][2] + arr[o][3]) / 4 > 80) {
			pass++;
			printf("pass\n");
		}
		else printf("false\n");
	}

	printf("%d", pass);
	return 0;
}