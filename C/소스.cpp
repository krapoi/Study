#pragma warning (disable:4996)
#include <stdio.h>
	// 포인터란 무엇인가? 주소를 저장하는 변수
int main(void) {
	/*int arr[3] = { 0,1,2 };
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	int* ptr;
	ptr = arr;
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2));
	*/

	/*int* ptr1 = 1000;
	int* ptr2 = 1000;
	int* ptr3 = 1000;
	printf("%d %d \n", ptr1, ptr1++);
	printf("%d %d \n", ptr2++, ptr3++);
	printf("%d %d %d\n", ptr1, ptr2, ptr3); // 4가 증가됨
	printf("%p %p %p\n", ptr1, ptr2, ptr3);// 주소출력
	printf("%d %d %d\n", *ptr1, *ptr2, *ptr3);
	*/

	//char str1[10] = "abcd";
	//char* str2 = "ABCD";
	//printf("%s %s\n", str1, str2);
	//str1[1] = 'a';
	////str2[2] = 'x';
	//printf("%s\n", str1);
	////printf("%s\n", str2);

	/*int a = 1, b = 2, c = 3;
	int Arr[3] = { 10,20,30 }; //배ㅐ열
	int* pArr[3] = { &a,&b,&c }; // 포인트배열
	printf("%d\n", *pArr[0]); // *(&a) == a
	printf("%d\n", *pArr[1]);
	printf("%d\n", *pArr[2]);*/

	char str[3][10] = { "kim","hong","lee" };
	//char* pstr[3] = { "kim","hong","lee" };
	char* pstr[3] = { str[0],str[1],str[2] };
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", *pstr);
	printf("%s\n", *(pstr+1));
	printf("%s\n", *(pstr+2));
	return 0;
}
