#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա
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
//	//���ļ�test.txt
//	
//	FILE* pf = fopen("test.txt", "r");//"w"//д�ļ����½�һ���ļ�������ļ����������ظ�����Ḳ�Ǿɵ�txt����������һ���µ�txt
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	
//	//�ر��ļ�
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
//	//д�ļ�
//	fputs("bit", pfWrite);
//	
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c",fgetc(pfRead));//b
//	printf("%c",fgetc(pfRead));//i
//	printf("%c",fgetc(pfRead));//t
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);//��׼������
//	fputc(ch, stdout);//��׼�����
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
//	//���ļ�
//	fgets(buf, 1024, pf);//��ȡһ��
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
//	//д�ļ�
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
//	//�Ӽ��̶�ȡһ���ı���Ϣ
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
//	//��ʽ�����
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
//	//��ʽ������
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
//	//��ʽ������
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
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//�Ѹ�ʽ������������ַ���
	//printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);//���ַ����ж�ȡ��ʽ��������
	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}

