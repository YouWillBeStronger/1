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
//	// 错误示范
//	//char arr[] = { 'a','b','c','d','e','f','\0'};
//	//int len = strlen(arr);
//	//printf("%d\n", my_strlen(arr));
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//size_t = (unsigned int);
//		//strlen 返回无符号整数，相减也是无符号整数
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
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的地的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	//char* arr1 = "abcdefg";//错误示范
//	char arr2[] = "bit";
//	//char arr2[] = { 'b','i','t' };//错误示范
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}



//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到目的字符串的'\0'
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	//2.追加
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
//	int ret = strcmp(p1, p2);//比较对应的asll码值，如果相等就比较后面一个，知道都为'\0'才为0
//	//p1>p2返回>0
//	//p1=p2返回0
//	//p1<p2返回<0
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
//	//比较
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')//相等
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)//大于
//		return 1;
//	else//小于
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