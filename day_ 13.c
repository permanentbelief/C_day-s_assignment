#define _CRT_SECURE_NO_WARNINGS 1 
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//����һ
//#include <stdio.h>
//void swap_(char* arr)
//{
//	char arr1[10] = { 0 };//���ְ취arr1[]�б���ָ����СΪԭ�����С
//	int i = 0;
//	int count = 0;
//	int n = 0;
//	for (i = 0; arr[i] != '\0'; i++) //��ʱ��������str�ġ�/0������ȷ���ģ��������
//	{
//		count++;
//	}
//	for (i = 0; i < count ; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			arr1[n] = arr[i];
//			n++;
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr1[n] = arr[i];
//			n++;
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//int main()
//{
//	char str[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	swap_(str);
//	/*int count = 0;
//	int sz = 0;
//	sz = sizeof(str) / sizeof(str[0]);*/
//	/*for (int i = 0; i < sz; i++)
//	{
//		count++;
//	}
//	printf("%d", count);*/
//	system("pause");
//}
//������
//#include <stdio.h>
//void swap_(char *arr, int n)
//{
//	char str[100] = { 0 }; //Ϊʲô ����str�����һ������Ĵ�С��������100
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			str[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			str[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", str[i]);
//	}
//
//
//}
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		count++;
//	}
//	swap_(arr, sz);
//	//printf("%d", count);
//	system("pause");
//}
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#include <stdio.h>
int search_key(char arr[3][3], int key)
{
	int i = 0;
	int j = 0;
	if (key<arr[0][0] || key>arr[2][2])
	{
		return -1;
	}
	else{
		if (arr[1][1]>=key)//((arr[1][1] > arr[0][2]) && arr[1][1] > arr[2][0])
		{
			for (i = 0; i <= 1; i++)
			{
				for (j = 0; j <= 1; j++)
				{
					if (key == arr[i][j])
					{
						return 1;
					}
				}
			}
			return -1;
		}
		else
		{
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if ((i + j >= 2) && key == arr[i][j])
					{
						return 1;
					}
				}
			}
			return -1;
		}
		/*for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				if (i + j == 2)
				{
				
				}
			}
		}*/
	}
}
int main()
{
	char arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	int ret = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("������Ҫ���ҵ�����");
	scanf("%d",&k);
	ret = search_key(arr[3][3],k);
	if (ret == -1)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ���");
	}
	system("pause");
}