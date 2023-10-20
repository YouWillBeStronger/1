#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string>
int main() {
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4/8 -这里表示首元素地址，地址的大小是4或8
	//printf("%d\n", sizeof(*a));//4 -数组名表示首元素地址 *a就是首元素
	//printf("%d\n", sizeof(a + 1));//4/8 -第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4 - &a取出的是数组的地址，地址的大小也是4或8
	//printf("%d\n", sizeof(*&a));//16 -&a是数组的地址，数组的地址解引用访问的是数组，sizeof
	//printf("%d\n", sizeof(&a + 1));//4/8 -&a是数组的地址，&a+1跳过整个数组，但还是地址，所以是4/8个地址
	//printf("%d\n", sizeof(&a[0]));//4/8 -第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 -第二个元素的地址

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 -sizeof计算的是数组的大小 6*1 = 6
	printf("%d\n", sizeof(arr + 0));//4/8 -arr是首元素的地址arr+0还是首元素地址
	printf("%d\n", sizeof(*arr));//1 arr是首元素地址，*arr就是首元素
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8 &arr是数组的地址
	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 -第二个元素的地址

	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值
	return 0;
}