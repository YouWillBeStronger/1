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
	//1.��NULLָ���Ӧ�ò���
	//int* p = malloc(40);
	////��p������ص��ж�
	//*p = 10;//malloc���ٿռ�ʧ�ܻ��NULLָ������ò���

	//2.�Զ�̬�����ڴ��Խ�����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////Խ��
	//for(i = 0;i <= 10;i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;


	////3.�ԷǶ�̬�ڴ濪���ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int* p = &a;
	////�Ƕ�̬�ڴ�ʹ��free
	//free(p);
	//p = NULL;

	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
	////���տռ�
	//free(p);
	//p = NULL;

	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��


	////�ͷ�
	//free(p);
	////p = NULL;
	//free(p);//�ظ��ͷ�

	//6.��̬�����ڴ������ͷ�(�ڴ�й¶)
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
//	strcpy(str, "hello world");//�������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//����ջ�ռ�ĵ�ַ����
//char* GetMemory(void)
//{
//	char p[] = "hello world";//ջ�� - �����		
//	int* ptr = malloc(100);//���� - �������
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
//	printf(str);//�����ͷŶ�̬���ٵ��ڴ浼���ڴ�й¶
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
//	free(str);//�ͷ�str ָ��Ŀռ�󣬲������str��ΪNULL
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
//	int arr[];//δ֪��С�� - ���������Ա-�����С�ǿ��Ե�����
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
	//������С
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