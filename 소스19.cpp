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
			return 0; // 소수가 아니다
	return 1; // 소수임을 리턴
}

int main() {
	while (1)
	{
		int n;
		printf("숫자 : ");
		scanf("%d", &n);
		if (n < 2)return 0;
		if (n >= 1000) {
			printf("\n");
			continue;
		}
		int primeCnt = 1;
		int prime;
		for (int i = 2; i <= n; i++) {
			if (isPrime(i)) { // 0이 넘어오면 소수가 아니다.
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
	printf("쵀대공약수 : %d", gcd(a, b));
	printf("쵀대공약수 : %d", a * b / gcd(a, b));*/
	return 0;
}