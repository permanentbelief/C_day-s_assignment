#define _CRT_SECURE_NO_WARNINGS 1 
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。
#include <stdio.h>
//int main()
//{
//	int number1 = 0;
//	int number2 = 0;
//	scanf("%d %d", &number1, &number2);
//	int temp = 0;
//	temp = number1;
//	number1 = number2;
//	number2 = temp;
//	printf("%d %d", number1, number2);
//	system("pause");
//}
//int main()
//{
//	int number1 = 0;
//	int number2 = 0;
//	scanf("%d %d", &number1, &number2);
//	int temp = 0;
//	number1 = number1^number2;
//	number2 = number1^number2;
//	number1 = number1^number2;
//	printf("%d %d", number1, number2);
//	system("pause");
//}
//三个数 从大到小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//}
//求最大公约数
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	for (int i = a; i > 0; i--)
	{
		if (a%i == 0 && b %i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	system("pause");
}