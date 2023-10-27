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

//位段：二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////占47bit - 6个字节*8 = 48bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
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


//枚举的类型
//enum Sex
//{
//	枚举的可能取值-常量
//	可以赋初始值，但不能改
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
//c语言的源代码--预编译-->编译-->链接--->可执行程序
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


//联合 -联合体-共用体

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
//	////返回1，表示小端
//	////返回0，表示大端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//int a = 0x11223344;
//	//低地址------------------->高地址
//	//[][][][11][22][33][44][][][][][][][][]...  大端字节序存储模式
//	//[][][][44][33][22][11][][][][][][][][]...	 小端字节序存储模式
//	//讨论一个数据凡在内存中的存放的字节顺序
//	//大小端字节序问题
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