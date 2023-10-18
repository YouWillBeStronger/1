#define _CRT_SECURE_NO_WARNINGS 1


//signal是一个函数声明
//signal函数参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数是int，返回类型是void
//signal 函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，
//void (*signal(int, void(*)(int))  )(int);
//pfun_t signal(int, pfun_t);
//typedef void(* pfun_t)(int);
//
//
//typedef unsigned int uint;
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，可以存放四个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);


////写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


//void menu()
//{
//	printf("*********************************\n");
//	printf("*******1.add        2.sub********\n");
//	printf("*******3.mul        4.div********\n");
//	printf("*******5.Xor        0.exit********\n");
//	printf("*********************************\n");
//}

//计算器

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//		default:
//			printf("选择错误!");
//		}
//	} while (input);
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误!");
//		}
//	} while (input);
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针数组
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("选择错误");
//		}
//		
//	} while (input);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向数组的每个元素的类型是一个函数指针 int(*)(int,int)
//
//	return 0;
//}


//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}