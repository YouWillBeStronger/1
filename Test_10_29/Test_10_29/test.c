#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//
//	struct S arr[50];//50��struct S ���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}

//C���Կ��Դ����䳤���� -C99��������
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//���ռ䶯̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc ��ʼ��ÿ���ռ��ֵΪ0
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p == NULL;
//	return 0;
//}



//realloc ������̬�ڴ濪�ٿռ�Ĵ�С

//int main()
//{
//	int* p = malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 5;i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//ֻ����ʹ��malloc���ٵ�20���ֽڵĿռ�
	//���20���ֽڲ�����������
	//ϣ����40���ֽڵĿռ�
	//�������ʹ��realloc��������̬���ٵ��ڴ�

	//reallocʹ�õ�ע������:
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򿪱�һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.Ҫ��һ���µı���������realloc�����ķ���ֵ
//	int*ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//
//		int i = 0;
//		for (i = 5;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	//1.��NULL���н����ò���
//	int* p = (int*) malloc(40);
//	//��һ malloc ʧ����, p �ͱ���ֵΪNULL
//	//*p = 0;//err
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
	//2.�Զ�̬�ڴ��Խ�����
	//int* p = (int*)malloc(5 *sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0;i < 10;i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	////
	//free(p);
	//p = NULL;



	int a = 10;
	int* p = &a;
	*p = 20;
	//3.�ԷǶ�̬�����ڴ��free
	free(p);
	p = NULL;
	return 0;
}