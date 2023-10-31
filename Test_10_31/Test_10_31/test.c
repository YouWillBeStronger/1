#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件test.txt
//	
//	FILE* pf = fopen("test.txt", "r");//"w"//写文件会新建一个文件，如果文件中有名字重复，则会覆盖旧的txt，重新生成一个新的txt
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	fputs("bit", pfWrite);
//	
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件
//	printf("%c",fgetc(pfRead));//b
//	printf("%c",fgetc(pfRead));//i
//	printf("%c",fgetc(pfRead));//t
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);//标准输入流
//	fputc(ch, stdout);//标准输出流
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);//读取一行
//	//printf("%s", buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("word\n", pf);
//
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	//fputs(buf, stdout);
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化输出
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14,"bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化输入
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0};
//	
//	//格式化输入
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14,"bit" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//把格式化数据输出成字符串
	//printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);//从字符串中读取格式化的数据
	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}

