#define _CRT_SECURE_NO_WARNINGS 1 
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//��������
//#include <stdio.h>
//void left(char* str, int k)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int temp = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		count++;
//	}
//	//printf("%d", count);
//	for (j = 0; j < k;j++)
//	{
//		temp = str[0];
//		for (i = 0; i < count; i++)
//		{
//		//temp = str[0];
//		str[i] = str[i + 1];
//		}
//		str[count-1] =temp;
//		
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", str[i]);
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int a = 2;
//	left(arr, a);
//	system("pause");
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <string.h>
int Is_left_Swap(char *arr1, char *arr2, int k)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < k; i++)
	{
		temp = arr1[0];
		for (j = 0; j < k; j++)
		{
			arr1[j] = arr1[j + 1];

		}
		arr1[k-1] = temp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int ret = 0;
	int count = sizeof(str1) / sizeof(str1[0]);
	//printf("%d ", count);

	ret = Is_left_Swap(str1, str2, count-1);
	if (ret == 0)
	{
		printf("����");
	}
	else
	{
		printf("��");
	}
	system("pause");
}