#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//方法一
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
// 方法二
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
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//int main()
//{
//	//先输出二进制序列
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
//	int even[32];//偶数
//	int odd[32]; // 奇数
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
//3. 输出一个整数的每一位。 -----顺序输出
//void Seperate(unsigned int value)
//{
//	while (value > 9)                
//	{
//		Seperate(value / 10); //1234    
//		value %= 10;
//	}
//	printf("%d ", value );
//}
// 倒序输出
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
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
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