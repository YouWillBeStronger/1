#define _CRT_SECURE_NO_WARNINGS 1


//signal��һ����������
//signal����������2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ�����int������������void
//signal �����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int��
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
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���Դ���ĸ������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf,�ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);


////дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


//void menu()
//{
//	printf("*********************************\n");
//	printf("*******1.add        2.sub********\n");
//	printf("*******3.mul        4.div********\n");
//	printf("*******5.Xor        0.exit********\n");
//	printf("*********************************\n");
//}

//������

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
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("ѡ�����!");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����!");
//		}
//	} while (input);
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr��һ������ָ������
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("ѡ�����");
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
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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