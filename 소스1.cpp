#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	/*int arr[15]{ 0, };
	int i = 0;
	int j = 0;
	int min = 0;

	while (1) {
		scanf("%d", &j);
		if (j <= 0 || j > 10) {
			break;
		}
		arr[j]++;

	}

	for (i = 0; i <= 10; i++) {
		if (arr[i] > 0) {
			printf("%d : %d\n",i , arr[i]);

		}
	}
	*/

	int arr[3][3] = { 0, };
	int a = 0;
	int k = 0;
	int p = 0;
	int z = 0;
	for (a = 0; a < 3; a++) {
		for (int i = 0; i < 3; i++) {
			printf("%d번점수\n", a + 1);
			scanf("%d", &arr[a][i]);
		}
	}
	printf("컴일  프C  수학  총점\n");
	for (p = 0; p < 3; p++) {
		for (int i = 0; i < 3; i++) {
			printf("%d번 : %d ",p + 1, arr[p][i]);
			k += arr[p][i];
		}printf("%d\n", k);
		z += k;
		k = 0;
	}

	printf("합계 : %d %d %d %d", arr[0][0] + arr[0][1] + arr[0][2], arr[1][0] + arr[1][1] + arr[1][2], arr[2][0] + arr[2][1] + arr[2][2],z);



	return 0;

}