#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string>
int main() {
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4/8 -�����ʾ��Ԫ�ص�ַ����ַ�Ĵ�С��4��8
	//printf("%d\n", sizeof(*a));//4 -��������ʾ��Ԫ�ص�ַ *a������Ԫ��
	//printf("%d\n", sizeof(a + 1));//4/8 -�ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4 - &aȡ����������ĵ�ַ����ַ�Ĵ�СҲ��4��8
	//printf("%d\n", sizeof(*&a));//16 -&a������ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof
	//printf("%d\n", sizeof(&a + 1));//4/8 -&a������ĵ�ַ��&a+1�����������飬�����ǵ�ַ��������4/8����ַ
	//printf("%d\n", sizeof(&a[0]));//4/8 -��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 -�ڶ���Ԫ�صĵ�ַ

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 -sizeof�����������Ĵ�С 6*1 = 6
	printf("%d\n", sizeof(arr + 0));//4/8 -arr����Ԫ�صĵ�ַarr+0������Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ��
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8 &arr������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 -�ڶ���Ԫ�صĵ�ַ

	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
	return 0;
}