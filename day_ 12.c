#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��

//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//#include <math.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	int a[32] = { 0 };
//	for (i = 0; i <= 31; i++)
//	{
//		a[i] = (value >> i) & 1;
//			//value >>= 1;
//			//sum += ((((value >> i) & 1))* pow(2, 31 - i));	
//	}
//	for (i = 0; i <= 31; i++)
//	{
//		sum += a[i]*pow(2, (31 - i));
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int a = 25;
//	//scanf("%d",&a);
//	int ret = reverse_bit(a);
//	printf("%u",ret);
//	system("pause");
//}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ�� 
//��a��b��ͬ�Ĳ��ּ���a��b��ͬ�ĵط���a��b��ͬ�Ĳ���Ϊ��a&b����
//a��b��ͬ�Ĳ���Ϊ��a^b������ͬ�Ĳ��ֳ��Զ����ǣ�a^b>>1��
//int main()
//{
//	int a = 0;
//	int b = 0;
//    scanf("%d %d",&a, &b);                  //  0000101   0000001    //1 
//	int mid = a&b +((a^b)>>1);
//    //int mid = a^b;
//	printf("%d", mid);
//	system("pause");
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student














void reverse_string(char *str)
{
	int i = 0;
	int left = 0;
	int right = 0;
	int temp = 0;
	int count = 0;
	int n = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		right++;
	}
	/*for (i = 0; i < right ; i++)
	{
	printf("%c", str[i]);
	}*/
	//count = right;
	/*while (left <= right)
	{
	temp = str[left];
	str[left] = str[right];
	str[right] = temp;
	left++;
	right--;
	}*/
	for (i = 0; i < (left + right) / 2; i++)
	{
		temp = str[i];
		str[i] = str[right - 1 - i];
		str[right - 1 - i] = temp;

	}
	int j = 0;
	for (i = 0; i < right; i++)
	{
		if (*str != " ")
		{
			count++;
		}
		for (j = 0; j < count/2; j++)
		{
			temp = str[i];
			str[i] = str[count - 1 - i];
			str[count - 1 - i] = temp;
		}
		count = 0;
	}

	for (i = 0; i < right; i++)
	{
		printf("%c", str[i]);


	}
}
int main()
{
	char str[] = "student a am i";
	reverse_string(str);
	system("pause");
	return 0;
		
}

		