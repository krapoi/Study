#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

int main() {
	//int n1 = 0;
	//int n2 = 0;
	//int sum = 0;
	////dice : 1 ~ 6 (0 ~ 5 + 1)
	//char enter = 0;
	//srand((unsigned int)time(NULL));
	//while (1) {
	//	

	//	printf("�� �Ұ�? (y/n)\n");
	//	scanf(" %c", &enter);
	//	if (enter == 'n' || enter == 'N')break;

	//	dice :if (enter == 'y' || enter == 'Y') {
	//		n1 = rand() % 6 + 1;
	//		n2 = rand() % 6 + 1;
	//		printf("%d %d\n", n1,n2);
	//		sum += n1;
	//		sum += n2;
	//		if (n1 == n2) {
	//			printf("�����Դϴ�.\n");
	//			goto dice;
	//			}
	//		printf("%d��ŭ �����ϼ���.\n", sum);
	//		sum = 0;
	//		}
	//	}
	//	printf("�ֻ��� ����");
	
	
	
	/*int rsp = 0;
	int enter = 0;
	int win = 0;
	int lose = 0;
	int trow = 0;
	int i = 0;
	int sum = 0;
	double gameset = 0;
	srand((unsigned)time(0));
	printf("���?\n");
	scanf("%d", &i);
		for (int j = 0; j < i; j++) {
		
		printf("1 = ���ڱ�,2 = �ָ�,3 = ����\n");
		rsp = rand() % 3 + 1;
		scanf("%d", &enter);
		if (enter == rsp) {
			trow++;
			printf("���º�!, �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
			continue;
		}
		else if (enter == 1 && rsp == 3) {
			lose++;
			printf("�й�... �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
		else if (enter == 1 && rsp == 2) {
			win++;
			printf("�¸�!, �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
		else if (enter == 2 && rsp == 1) {
			lose++;
			printf("�й�... �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
		else if (enter == 2 && rsp == 3) {
			win++;
			printf("�¸�!, �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
		else if (enter == 3 && rsp == 1) {
			win++;
			printf("�¸�!, �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
		else if (enter == 3 && rsp == 2) {
			lose++;

			printf("�й�... �¸�:%d �й�:%d ���º�:%d\n", win, lose, trow);
		}
	}
		sum += win + lose + trow;
		gameset = win % sum;
	printf("����� �·� : %.4lf �ۼ�Ʈ\n", gameset);
	printf("���������� ������ �����մϴ�");*/


	//��ġ�� ���ڰ� ���ٸ� = ��Ʈ����ũ, ��ġ�� Ʋ���� = ��, ��ġ ���� 3����Ʋ���� = �ƿ�
	srand((unsigned)time(0));
	int computer[3];
	int i, j;
	int temp;
	int user[3];
	int count = 1;
	int strike = 0;
	int ball = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 3; i++) {

		temp = (rand() % 9) + 1;
		computer[i] = temp;
		for (j = 0; j < i; j++)
			if (temp == computer[j] && i != j)
				i--;
	}
	while (1) {
		printf("�Է�\n");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		if (user[0] < 1 || user[0] > 9 || user[1] < 1 || user[1] > 9 || user[2] < 1 || user[2] > 9) {
			printf("�����ʰ� ���Դϴ�.\n");
			continue;
		}
		else if (user[0] == user[1] || user[0] == user[2] || user[1] == user[2]) {
			printf("�ߺ��� ���� �Դϴ�.\n");
			continue;
		}
		ball = 0;
		strike = 0;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (computer[i] == user[j]) {
					if (i == j) {
						strike++;
					}
					else ball++;
				}
			}
		}
		printf("��Ʈ����ũ : %d, �� : %d\n", strike, ball);
		if (strike == 3) {
			printf("�����Դϴ�.");
			break;
		}
	}

	return 0;
}
