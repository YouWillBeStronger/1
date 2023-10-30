#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
//int main() 
//{
//	/*int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p != NULL)
//	{
//		p = p2;
//	}*/
//	int *p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}


//int main()
//{
	//1.对NULL指针接应用操作
	//int* p = malloc(40);
	////对p进行相关的判断
	//*p = 10;//malloc开辟空间失败会对NULL指针解引用操作

	//2.对动态开辟内存的越界访问
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////越界
	//for(i = 0;i <= 10;i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;


	////3.对非动态内存开辟内存使用free释放
	//int a = 10;
	//int* p = &a;
	////非动态内存使用free
	//free(p);
	//p = NULL;

	//4.使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0;i < 10;i++)
	//{
	//	*p++ = i;
	//}
	////回收空间
	//free(p);
	//p = NULL;

	//5.对同一块动态内存的多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用


	////释放
	//free(p);
	////p = NULL;
	//free(p);//重复释放

	//6.动态开辟内存忘记释放(内存泄露)
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1);
//	}
//	return 0;
//}

//void GetMemory(char* p)//**p
//{
//	p = (char*)malloc(100);//*p
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//&str
//	strcpy(str, "hello world");//程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//返回栈空间的地址问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//栈区 - 会回收		
//	int* ptr = malloc(100);//堆区 - 不会回收
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放动态开辟的内存导致内存泄露
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//释放str 指向的空间后，并不会吧str置为NULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[];//未知大小的 - 柔性数组成员-数组大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}



struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0;i < 5;i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	//调整大小
	int*ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 0;i < 10;i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}