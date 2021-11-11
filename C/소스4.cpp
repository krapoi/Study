#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
#pragma warning (disable: 6031)

//void swap1(int, int); //call by value 값
//void swap2(int*, int*); //call by reference 참조
// 함수호출 후에도 값의 위치가 변경되었는가?

int main() {
	//int a = 5, b = 8;
	//printf("a=%d,b=%d\n", a, b);
	//swap1(a, b);//값에 의한 호출
	//printf("a=%d,b=%d\n", a, b);
	//swap2(&a, &b);// 참조의 의한 호출
	//printf("a=%d,b=%d\n", a, b);
	
	return 0;
}
//void swap1(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap2(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}