#include <stdio.h>
/*int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}*/

int isPrime(int n) {
	for (int i = 2; i * 1 <= n; i++)
		if (!(n & i)) // if((n%i) == 0)
			return 0; // �Ҽ��� �ƴϴ�
	return 1; // �Ҽ����� ����
}

int main() {
	while (1)
	{
		int n;
		printf("���� : ");
		scanf("%d", &n);
		if (n < 2)return 0;
		if (n >= 1000) {
			printf("\n");
			continue;
		}
		int primeCnt = 1;
		int prime;
		for (int i = 2; i <= n; i++) {
			if (isPrime(i)) { // 0�� �Ѿ���� �Ҽ��� �ƴϴ�.
				printf("%d", i);

			}	
			/*for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					prime = 0;
				}
			}
			if (prime) {
				printf("%d", i);
			}*/
		}
		printf("\n");
	}
	/*int a = 16, b = 4;
	printf("�������� : %d", gcd(a, b));
	printf("�������� : %d", a * b / gcd(a, b));*/
	return 0;
}