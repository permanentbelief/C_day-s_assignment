#define _CRT_SECURE_NO_WARNINGS 1 
//1. 打印100~200之间的素数
//2. 输出乘法口诀表
//3. 判断1000年-- - 2000年之间的闰年
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//	system("pause");
//
//
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//}
#include <stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			printf("%d ", i);
			count++;
			
		}
		
		if (j % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("%d", count);
	system("pause");
}