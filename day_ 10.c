#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//����һ
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if((value%2)&1==1)
//		//if (value % 2 == 1)
//		{
//			count++;
//		}
//		//value >>=  1;
//		value /= 2;
//	}
//	return count;
//}
// ������
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((value >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = count_one_bits(a);
//	printf("%d", ret);
//	system("pause");
//}
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//int main()
//{
//	//���������������
//	/*int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int arr[32] = { 0 };
//	for (i = 0; i < 32; i++)
//	{
//		arr[31 - i] = (a >> i) & 1;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", arr[i]);
//	}*/
//	//printf("%d", 1 & 8);                 
//	//printf("%d", 1 & 8);
//	int even[32];//ż��
//	int odd[32]; // ����
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	
//	for (i = 0; i < 32; i+=2)
//	{
//		even[i] = (a >> (31 - i)) & 1;
//	}
//	for (i = 0; i < 32; i+=2)
//	{
//	printf("%d", even[i]);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2)
//	{
//		even[i] = (a >> (31 - i)) & 1;
//	}
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d", even[i]);
//	}
//	system("pause");                   
//}
//3. ���һ��������ÿһλ�� -----˳�����
//void Seperate(unsigned int value)
//{
//	while (value > 9)                
//	{
//		Seperate(value / 10); //1234    
//		value %= 10;
//	}
//	printf("%d ", value );
//}
// �������
//void Seperate(unsigned int value)
//{
//	while (value > 9)         
//	{
//		Seperate(value % 10);
//		value /= 10;
//	}
//	printf("%d ", value);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Seperate(a);
//	system("pause");
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1) )
//		//if (((m >> i) & 1) ^ ((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//}