#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ,1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ���ƿ��ˮ�����ʵ�֣�
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while(empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i <= sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while ((left<right) && (arr[left]%2==1))
//	{
//		left++;
//	}
//	while ((left < right) && arr[right] % 2 != 0)
//	{
//		right--;
//	}
//	if (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}


//��ת�ַ���

//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != 0);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k;i++)
//	{
//		//����תһ���ַ�
//		char tmp = *arr;
//		//Ų�������Ԫ��
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//������ת��
//ab cdef
//ba fedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char* tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}
//
////int is_left_move(char* s1, char* s2)
////{
////	int len = strlen(s1);
////	int i = 0;
////	for (i = 0;i < len;i++)
////	{
////		left_move(s1, 1);
////		int ret = strcmp(s1, s2);
////		if (ret == 0)
////			return 1;
////
////	}
////	return 0;
////}
//
////׷�ӷ�
////abcdefabcdef  
////�ж��Ƿ�Ϊ�Ӵ�
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat
//	//strcat(str1, str1);err
//	strncat(str1,str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ�Ϊstr1���Ӵ�
//	//strstr-���Ӵ�
//	int*ret =strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//
//}


//���Ͼ���
//һ�����־��󣬾����ÿ�д����ҵ��������ϵ��µ���
// ����ĳ�������Ƿ����
// Ҫ��ʱ�临�ӵ�С��O��N����
//1 2 3
//4 5 6
//7 8 9

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (y >= 0 && x < col - 1)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
int FindNum(int arr[3][3], int k, int* px,int*py)
{
	int x = 0;
	int y = *py - 1;
	while (y >= 0 && x <= *px - 1)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//�Ҳ���
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 5;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d\n", x, y);
	}
		

	else
		printf("�Ҳ���\n");
	return 0;
}
