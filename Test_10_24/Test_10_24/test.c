#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//
//	//int len = strlen("abcdef");
//	// ����ʾ��
//	//char arr[] = { 'a','b','c','d','e','f','\0'};
//	//int len = strlen(arr);
//	//printf("%d\n", my_strlen(arr));
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//size_t = (unsigned int);
//		//strlen �����޷������������Ҳ���޷�������
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	
//	return 0;
//	
//}



//my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�ĵص���ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	//char* arr1 = "abcdefg";//����ʾ��
//	char arr2[] = "bit";
//	//char arr2[] = { 'b','i','t' };//����ʾ��
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}



//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hellow";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	//strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	char* p1 = "bqwe";
//	char* p2 = "bqwer";
//	//if ("abcdef" == "sqwer")
//	int ret = strcmp(p1, p2);//�Ƚ϶�Ӧ��asll��ֵ�������ȾͱȽϺ���һ����֪����Ϊ'\0'��Ϊ0
//	//p1>p2����>0
//	//p1=p2����0
//	//p1<p2����<0
//	if (strcmp(p1, p2) >0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(strcmp(p1, p2)==0)
//	{
//		printf("p1=p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//
//	printf("%d\n",ret);
//	return 0;
//}

//int my_strcmp(const char* str1,const char*str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	//�Ƚ�
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')//���
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)//����
//		return 1;
//	else//С��
//		return -1;
//	return (*str1-*str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 4);
//	
//	printf("%s\n", arr1);
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);
	printf("%s\n", arr1);
}