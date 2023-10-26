#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{ 
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//			
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	////arr1中的数字拷贝到arr2中
//	//my_memcpy(arr2, arr1,sizeof(arr1));
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy不能胜任重叠拷贝
//	//my_memcpy(arr3 + 2, arr3,20);
//	//memmove可以胜任内存的重叠拷贝
//	//C语言标准：memcpy函数可以拷贝不重叠的就可以了
//	//当下发现：VS2013环境下可以处理重叠拷贝
//	//memmove(arr3 + 2, arr3, 20);
//
//	my_memmove(arr3 + 2, arr3, 20);
//	return 0;
//}

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//}

//memset - 内存设置

//int main()
//{
//	//char arr = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40个字节
//	memset(arr, 1, 10);
//	return 0;
//}

//声明一个结构体类型
//声明一个学生类型，通过学生类型来创建学生变量(对象)
//描述学生：属性-名字-电话-性别-年龄
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	//局部变量 s1,s2
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}


//struct 
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;//结构体指针
//
//int main()
//{
//	//psa = &sa;不合规
//	return 0;
//}

//结构体打得自引用
//struct Node
//{
//	int data;
//	//struct Node n;//不能包含自己
//	struct Node* next;
//};
//int main()
//{
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//结构体初始化
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}


//设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//
//#pragma pack()
////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	//宏
	//offsetof();求出偏移量
	printf("%d\n",offsetof(struct S, c));
	printf("%d\n",offsetof(struct S, i));
	printf("%d\n",offsetof(struct S, d));
	return 0;
}