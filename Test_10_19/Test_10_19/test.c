#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int(*pAdd)(int,int) = Add;
//	//int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);
//	printf("%d ", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*pArr)[5])(int, int)= &pArr;
//	
//	return 0;
//}


void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//一趟冒泡排序
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
			
			
	}
}
struct Stu
{
	char name[20];
	int age;
};
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//			);


cmp_int(const void* e1, const void* e2)
{
	//比较两个整形数值的
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int cmp_float(const void* e1, const void* e2)
{
	/*if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;*/
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] ={ 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0;j < sz;j++)
	{
		printf("%f ", f[j]);
	}
}
cmp_stu_by_age(const void* e1, const* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

com_stu_bt_name(const void* e1, const* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用大于小于等于比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]),cmp_stu_by_age );
}
int main()
{
	
	/*struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};*/

	//bubble_sort(arr, sz);
	//test1();
	//test2();
	test3();
	
	
}

//int main()
//{
//	int a = 10;
//	//int*pa = &a;
//	//char* pc = &a;
//	//void* p = &a;
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//	//p = &ch;
//	//void* 类型的指针可以接收任意类型的地址
//	//void* 类型的指针不能进行解引用操作
//	//void* 类型的指针不能进行+-整数的操作
//	return 0;
//}