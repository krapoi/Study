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
////S : Start, �����,E : End,������, sp ���������� (top)
//int visit(int, int);
struct Point { //����ü ��
	int x, y; //����ü ���
};
struct Student
{
	char name[20];
	char stu_num[10];
	int age;
};
int main() {
	
	//top = 0;
	//success = 0; // �̷� Ż�� ����
	//printf("=== �̷� Ż�� ��� ã�� ���� ===\n");
	//Si = 1, Sj = 1; //�����
	//Ei = 7, Ej = 7; //������
	//if (visit(Si, Sj) == 0)
	//	printf("�ⱸ�� ã�� �� ����\n");
	//else
	//	printf("��� ��θ� ã����\n");
	
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

	/* ���� ������ �ڵ�
	struct Person { 
    char name[20];        
    int age;             
    char address[100];  
};

int main()
{
    struct Person p1;     

    
    strcpy(p1.name, "ȫ�浿"); p1.name ���δ� ���ڿ��� ���� �� ���� strcpy ���
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    
    printf("�̸�: %s\n", p1.name);       
    printf("����: %d\n", p1.age);        
    printf("�ּ�: %s\n", p1.address);   

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
//	if (i == Ei && j == Ej) { //�������� �������� ��
//		printf("ã�� ��� %d ��\n", path++);
//		for (int k = 0; k < top; k++) 
//			printf("(%d , %d)", ri[k],rj[k]);
//		printf("\n");
//		success = 1; //��θ� ���������� ã��
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

