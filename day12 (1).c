#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>
//unsigned int  reverse_bit(unsigned int value)
//{
//	int i = 0;
//     unsigned  int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		long long int  k = pow(2,i);
//		 sum += ((value >> i) % 2 )* (pow(2, 31 - i));
//	}
//	return sum;
//}
//int main()
//{
//	int a = 25;
//	printf("%u",reverse_bit(a));
//	system("pause");
//}
//
//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int average = 0;
//	average = (a&b) + (a^b)/2;
//	printf("%d", average);
//	system("pause");
//}
//
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int a[9] = { 1, 1, 2, 2, 3, 4, 5, 4, 3 };
//	int purpose_num = 0;
//	for (int i = 0;  i < 9; i++)
//	{
//		purpose_num^= a[i];
//	}
//	printf("%d", purpose_num);
//	system("pause");
//}
//��չ ֻ��һ��������һ�Σ�����������3��
int main()
{
	int arr[10] = { 1,1,1,2,2,2,7,6,7,7};
	int per_num = 0;
	int *ptr = arr;
	int flag = 0;
	for (size_t i = 0; i < 10; i++)
	{
		per_num = arr[i];
		flag = 0;
		for (size_t j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				flag = 1;
				break;
			}

		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("%d", per_num);
	system("pause");
}
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//void reverse_string(char* str, int length)
//{
//	int start = 0;
//	int end = length - 1;
//	while (start < end)
//	{
//		char temp = str[start];
//		str[start] = str[end];
//		str[end] = temp;
//		start++;
//		end--;
//
//	}
//	for (size_t i = 0; str[i] != '\0'; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf(" ");
//}
//void separate(char* str)
//{
//	char arr[100] = { 0 };
//	size_t k = 0;
//	int i = 0;
//	while (*str)
//	{
//		
//		if (*str != ' ')
//		{
//			arr[k] = *str;
//			k++;
//		}
//		else
//		{
//			arr[k] = '\0';
//			reverse_string(arr,k);
//			k = 0;
//		}
//		
//		str++;
//	}
//	reverse_string(arr, k);
//}
//int main()
//{
//	char str[] = "i ma a tneduts";
//	int size = sizeof(str) / sizeof(str[0]);
//	reverse_string(str, size-1);
//	separate(str);
//	system("pause");
//}
