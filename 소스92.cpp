#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  

struct Point { int x, y; };

typedef struct _Person { 
    char name[20];
    int age;
    char address[100];
} Person; // ����ü�� Person������ ����

int main() {

    Point p;

    p.x = 3;
    p.y = 4;

    printf("\n (%d, %d)\n", p.x, p.y);
    // �޸𸮿� ��� ����Ǵ��� Ȯ��
    printf(" sizeof(p) = %d\n", sizeof(p));

    Person p1; // ����ü ��Ī Person���� ���� ����

    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ���Ǳ� �����߾ӷ�");

    printf("\n �̸� : %s\n", p1.name);
    printf(" ���� : %d\n", p1.age);
    printf(" �ּ� : %s\n", p1.address);

    // �޸𸮿� ��� ������ �Ǵ��� Ȯ��
    printf("\n sizeof(p1) = %d\n", sizeof(p1));
    printf(" �̸� : %d\n", p1.name);
    printf(" ���� : %d\n", p1.age);
    printf(" �ּ� : %d\n\n", p1.address);

    return 0;
}