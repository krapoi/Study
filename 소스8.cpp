#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
int ab(int n) {
	for (int i = 2; i*i < n; i++) {
		if (!(n % i)) {
			return 0;
		}
	}
	return 1;
}

int main() {
	//int i;
	//char str[256];
	//printf("Enter the number: ");
	//fgets(str, 256, stdin);
	//i = atoi(str); // 문자열을 숫자로 변환
	//printf("입력된 정수값 : %d, 2배의값 : %d.\n", i, i * 2);


	//int i;
	//char arr[50];
	//printf("Enter the number : ");
	//scanf("%d", &i);
	//_itoa(i, arr, 10); // 10진수 숫자로 문자열을 변환
	//printf("decimal: %s\n", arr);
	//_itoa(i, arr, 16); // 16진수
	//printf("hexadecimal: %s\n", arr);
	//_itoa(i, arr, 2); // 2진수
	//printf("binary: %s\n", arr);

	int a = 0;
	while (1)
	{
		scanf("%d", &a);
		if (a < 2) {
			break;

		}
		if (a > 1000) {
			continue;
		}


		for (int i = 2; i < a; i++) {
			if (ab(i)) {
				printf("%4d", i);
			}

		}printf("\n");
	}
	return 0;

}