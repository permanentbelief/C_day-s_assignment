#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。

//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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
//2.不使用（a + b） / 2这种方式，求两个数的平均值。 
//用a和b相同的部分加上a和b不同的地方，a和b相同的部分为（a&b），
//a和b不同的部分为（a^b），不同的部分除以二就是（a^b>>1）
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
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
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

		