#include <stdio.h>
#pragma warning (disable:4996)
typedef struct Score { // 구조체 Score를 S로 선언
    char name[20]; //이름
    int kor = 0; //국어성적
    int mat = 0; //수학성적
    int eng = 0; //영어성적
}S;

int main()
{
    S s;
    printf("학생 이름 : ");
    scanf("%s", &s.name);
    printf("국어 : ");
    scanf("%d", &s.kor);
    printf("수학 : ");
    scanf("%d", &s.mat);
    printf("영어 : ");
    scanf("%d", &s.eng);

    printf("당신의 평균점수 는 : %d점입니다\n", (s.eng + s.kor + s.mat) / 3);
   

    return 0;
}