#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	char arr[] = "dyx@qq.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	/*char*ret = strtok(buf, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p)) 
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//������
//0   -No error
//1   -Operation not permitted
//2   -No such file or directory
//...
//errno ��һ��ȫ�ֵĴ�����ı���
//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//int main()
//{
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = '9';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		};
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}


void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}

	return ret;
}
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

void* my_memmoge(void* dest, void* src, size_t num)
{

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memcpy(arr+2,arr,20);
	my_memmove(arr+2,arr,20);//�����ڴ��ظ������
	int i = 0;
		for (i = 0;i < 10;i++)
			printf("%d ", arr[i]);
	return 0;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//strcpy(arr2, arr1);
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}