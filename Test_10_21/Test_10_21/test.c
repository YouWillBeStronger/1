#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7 arr是整个数组'\0'是最后一个元素
//	printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小-arr+0是首元素的地址
//	printf("%d\n", sizeof(*arr));//1 *arr是首元素,首元素大小是1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 跳过一整个数组后的地址，也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6 
//	//printf("%d\n", strlen(*arr));//err 非法访问内存
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr-数组的地址-数组指针
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4/8 p+1 得到的是的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 *p是字符串的第一个字符 - 'a'
//	printf("%d\n", sizeof(p[0]));//1  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值 
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 -3*4*4
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]相当于第一行作为一维数组的数组名，sizeof（arr[0]）把数组名单独放在sizeof()内，计算的是第一行大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]是第一行的数组名，数组名此时是首元素地址，其实就是第一行第一个元素的地址，所以a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1));//4/8 a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名),所以a是首元素地址，二维数组的首元素是它的第一行，a就是第一行的地址,a+1是第二行地址
//	printf("%d\n", sizeof(*(a + 1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4/8	第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16 a是第一行的地址，*a就是第一行,sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16 计算第四行
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
////程序的结果是什么？
////2,5
// 
//
//
//
//
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);//0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//0x0010001   -整数 + 1
//    printf("%p\n", (unsigned int*)p + 0x1);//0x0010004
//    return 0;
//}
//
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}