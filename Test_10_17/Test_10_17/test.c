#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(int arr[3][5])
//{
//
//}
//void test1(int arr[][5])
//{
//
//}
//void test2(int arr[3][])//err
//{}
//void test3(int arr[][])//err
//{}

//void test3(int* arr)//err
//{}

//void test4(int **arr)//err
//{}

//void test5(int (*arr)[5])
//{}
//
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test(arr);//��ά���鴫��
//
//	test5(arr);
//	return 0;
//}

//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d ", Add(a, b));
//	//&������ �� ���������Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int,int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("HELLO WORLD");
	return 0;
}