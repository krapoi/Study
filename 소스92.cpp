#include <stdio.h>
#pragma warning (disable:4996)
typedef struct Score { // ����ü Score�� S�� ����
    char name[20]; //�̸�
    int kor = 0; //�����
    int mat = 0; //���м���
    int eng = 0; //�����
}S;

int main()
{
    S s;
    printf("�л� �̸� : ");
    scanf("%s", &s.name);
    printf("���� : ");
    scanf("%d", &s.kor);
    printf("���� : ");
    scanf("%d", &s.mat);
    printf("���� : ");
    scanf("%d", &s.eng);

    printf("����� ������� �� : %d���Դϴ�\n", (s.eng + s.kor + s.mat) / 3);
   

    return 0;
}