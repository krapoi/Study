#include <stdio.h>
//int m[9][9] =
//	{ 
//		{2,2,2,2,2,2,2,2,2},
//		{2,0,0,0,0,0,0,0,2},
//		{2,0,2,2,0,2,2,0,2},
//		{2,0,2,0,0,2,0,0,2},
//		{2,0,2,0,2,0,2,0,2},
//		{2,0,0,0,0,0,2,0,2},
//		{2,2,0,2,2,0,2,2,2},
//		{2,0,0,0,0,0,0,0,2},
//		{2,2,2,2,2,2,2,2,2}
//	};
//int Si, Sj, Ei, Ej, success, top, ri[100], rj[100];
////S : Start, 출발점,E : End,도착점, sp 스택포인터 (top)
//int visit(int, int);
struct Point { //구조체 점
	int x, y; //구조체 멤버
};
struct Student
{
	char name[20];
	char stu_num[10];
	int age;
};
int main() {
	
	//top = 0;
	//success = 0; // 미로 탈출 여부
	//printf("=== 미로 탈출 경로 찾기 게임 ===\n");
	//Si = 1, Sj = 1; //출발점
	//Ei = 7, Ej = 7; //도착점
	//if (visit(Si, Sj) == 0)
	//	printf("출구를 찾을 수 없음\n");
	//else
	//	printf("모든 경로를 찾았음\n");
	
	/*struct  Point p = { 4,5 };
	printf("x=%d , y=%d\n", p.x, p.y);
	struct Point p1;
	p1.x = 5;
	p1.y = 8;
	printf("x=%d,y=%d\n", p1.x, p1.y);
	struct Point myPoint[20];
	myPoint[0].x = 1;
	myPoint[0].y = 1;*/

	struct Student class11[20];

	/* 내가 이해한 코드
	struct Person { 
    char name[20];        
    int age;             
    char address[100];  
};

int main()
{
    struct Person p1;     

    
    strcpy(p1.name, "홍길동"); p1.name 으로는 문자열을 받을 수 없어 strcpy 사용
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    
    printf("이름: %s\n", p1.name);       
    printf("나이: %d\n", p1.age);        
    printf("주소: %s\n", p1.address);   

    return 0;
}
	*/
	return 0;

}

//int visit(int i, int j) {
//	static int path = 1;
//	m[i][j] = 1;
//	ri[top] = i, rj[top] = j;
//	top++;
//
//	if (i == Ei && j == Ej) { //도착점에 도착했을 때
//		printf("찾은 경로 %d 번\n", path++);
//		for (int k = 0; k < top; k++) 
//			printf("(%d , %d)", ri[k],rj[k]);
//		printf("\n");
//		success = 1; //경로를 성공적으로 찾음
//		
//	}
//
//	if (m[i][j + 1] == 0) //right
//		visit(i, j + 1);
//	if (m[i + 1][j] == 0) //down
//		visit(i + 1, j);
//	if (m[i][j - 1] == 0) //left
//		visit(i, j - 1);
//	if (m[i - 1][j] == 0) //up
//		visit(i - 1, j);
//	top--;
//	m[i][j] = 0;
//	return success;
//
//}

