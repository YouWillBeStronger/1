#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//λ�Σ�������λ
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////ռ47bit - 6���ֽ�*8 = 48bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
// 
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//ö�ٵ�����
//enum Sex
//{
//	ö�ٵĿ���ȡֵ-����
//	���Ը���ʼֵ�������ܸ�
//	MALE,
//	FEMALE = 9,
//	SECETE 
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BULE//2
//};
//
//c���Ե�Դ����--Ԥ����-->����-->����--->��ִ�г���
//#define Red 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = 2;//int
//	printf("%d %d %d\n", RED, GREEN, BULE);//0 1 2
//	printf("%d %d %d\n", MALE, FEMALE, SECETE);
//	return 0;
//}


//���� -������-������

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//check_sys()
//{
//	//int a = 1;
//	////����1����ʾС��
//	////����0����ʾ���
//	//return *(char*)&a;
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//int a = 0x11223344;
//	//�͵�ַ------------------->�ߵ�ַ
//	//[][][][11][22][33][44][][][][][][][][]...  ����ֽ���洢ģʽ
//	//[][][][44][33][22][11][][][][][][][][]...	 С���ֽ���洢ģʽ
//	//����һ�����ݷ����ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d ", sizeof(s));
//
//	return 0;
//}



union Un
{
	int a;//4
	char arr[5];//5
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}