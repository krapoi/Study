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
	//i = atoi(str); // ���ڿ��� ���ڷ� ��ȯ
	//printf("�Էµ� ������ : %d, 2���ǰ� : %d.\n", i, i * 2);


	//int i;
	//char arr[50];
	//printf("Enter the number : ");
	//scanf("%d", &i);
	//_itoa(i, arr, 10); // 10���� ���ڷ� ���ڿ��� ��ȯ
	//printf("decimal: %s\n", arr);
	//_itoa(i, arr, 16); // 16����
	//printf("hexadecimal: %s\n", arr);
	//_itoa(i, arr, 2); // 2����
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