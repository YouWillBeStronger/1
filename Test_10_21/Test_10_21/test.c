#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7 arr����������'\0'�����һ��Ԫ��
//	printf("%d\n", sizeof(arr + 0));//4/8 ������ǵ�ַ�Ĵ�С-arr+0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1 *arr����Ԫ��,��Ԫ�ش�С��1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 ����һ���������ĵ�ַ��Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6 
//	//printf("%d\n", strlen(*arr));//err �Ƿ������ڴ�
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr-����ĵ�ַ-����ָ��
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4/8 p+1 �õ����ǵ����ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p���ַ����ĵ�һ���ַ� - 'a'
//	printf("%d\n", sizeof(p[0]));//1  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ 
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 -3*4*4
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]�൱�ڵ�һ����Ϊһά�������������sizeof��arr[0]������������������sizeof()�ڣ�������ǵ�һ�д�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ������a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//4/8 a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������),����a����Ԫ�ص�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ,a+1�ǵڶ��е�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4/8	�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16 a�ǵ�һ�еĵ�ַ��*a���ǵ�һ��,sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16 ���������
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
////����Ľ����ʲô��
////2,5
// 
//
//
//
//
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);//0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//0x0010001   -���� + 1
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