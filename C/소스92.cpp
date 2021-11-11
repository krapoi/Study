#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  

struct Point { int x, y; };

typedef struct _Person { 
    char name[20];
    int age;
    char address[100];
} Person; // 구조체를 Person을ㄹ로 정의

int main() {

    Point p;

    p.x = 3;
    p.y = 4;

    printf("\n (%d, %d)\n", p.x, p.y);
    // 메모리에 어떻게 저장되는지 확인
    printf(" sizeof(p) = %d\n", sizeof(p));

    Person p1; // 구조체 별칭 Person으로 변수 선언

    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 관악구 조원중앙로");

    printf("\n 이름 : %s\n", p1.name);
    printf(" 나이 : %d\n", p1.age);
    printf(" 주소 : %s\n", p1.address);

    // 메모리에 어떻게 저장이 되는지 확인
    printf("\n sizeof(p1) = %d\n", sizeof(p1));
    printf(" 이름 : %d\n", p1.name);
    printf(" 나이 : %d\n", p1.age);
    printf(" 주소 : %d\n\n", p1.address);

    return 0;
}