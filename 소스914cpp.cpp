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

	//	printf("겜 할거? (y/n)\n");
	//	scanf(" %c", &enter);
	//	if (enter == 'n' || enter == 'N')break;

	//	dice :if (enter == 'y' || enter == 'Y') {
	//		n1 = rand() % 6 + 1;
	//		n2 = rand() % 6 + 1;
	//		printf("%d %d\n", n1,n2);
	//		sum += n1;
	//		sum += n2;
	//		if (n1 == n2) {
	//			printf("더블입니다.\n");
	//			goto dice;
	//			}
	//		printf("%d만큼 전진하세요.\n", sum);
	//		sum = 0;
	//		}
	//	}
	//	printf("주사위 종료");
	
	
	
	/*int rsp = 0;
	int enter = 0;
	int win = 0;
	int lose = 0;
	int trow = 0;
	int i = 0;
	int sum = 0;
	double gameset = 0;
	srand((unsigned)time(0));
	printf("몇번?\n");
	scanf("%d", &i);
		for (int j = 0; j < i; j++) {
		
		printf("1 = 보자기,2 = 주먹,3 = 가위\n");
		rsp = rand() % 3 + 1;
		scanf("%d", &enter);
		if (enter == rsp) {
			trow++;
			printf("무승부!, 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
			continue;
		}
		else if (enter == 1 && rsp == 3) {
			lose++;
			printf("패배... 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
		else if (enter == 1 && rsp == 2) {
			win++;
			printf("승리!, 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
		else if (enter == 2 && rsp == 1) {
			lose++;
			printf("패배... 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
		else if (enter == 2 && rsp == 3) {
			win++;
			printf("승리!, 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
		else if (enter == 3 && rsp == 1) {
			win++;
			printf("승리!, 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
		else if (enter == 3 && rsp == 2) {
			lose++;

			printf("패배... 승리:%d 패배:%d 무승부:%d\n", win, lose, trow);
		}
	}
		sum += win + lose + trow;
		gameset = win % sum;
	printf("당신의 승률 : %.4lf 퍼센트\n", gameset);
	printf("가위바위보 게임을 종료합니다");*/


	//위치와 숫자가 같다면 = 스트라이크, 위치만 틀리면 = 볼, 위치 숫자 3개다틀리면 = 아웃
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
		printf("입력\n");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		if (user[0] < 1 || user[0] > 9 || user[1] < 1 || user[1] > 9 || user[2] < 1 || user[2] > 9) {
			printf("범위초가 수입니다.\n");
			continue;
		}
		else if (user[0] == user[1] || user[0] == user[2] || user[1] == user[2]) {
			printf("중복된 숫자 입니다.\n");
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
		printf("스트라이크 : %d, 볼 : %d\n", strike, ball);
		if (strike == 3) {
			printf("정답입니다.");
			break;
		}
	}

	return 0;
}
