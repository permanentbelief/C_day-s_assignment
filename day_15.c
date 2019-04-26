#define _CRT_SECURE_NO_WARNINGS 1 
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 1, 3, 4, 4, 6, 6, 9, 9 };
//	int result = 0;
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		result ^= arr[i];
//
//	}
//	printf("%d", result);
//	system ("pause");
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int a = 1;
//	int b;
//	int bottle = 20;
//	int empty_bottle = 20;
//	//empty_bottle+= bottle/2
//	// 20瓶  20空瓶  换10瓶 10个空瓶 换5瓶 5个空瓶 换2瓶 2+1=3个空瓶 换1瓶 2个空瓶 再换1瓶
//	while (empty_bottle != 1)
//	{
//		int t = 0;
//		t = empty_bottle%2;
//		bottle += empty_bottle / 2;//20+10= 30 30+5 =35 
//		empty_bottle = empty_bottle/ 2 + t; // 5  2
//		//empty_bottle += t + empty_bottle;
//	}
//	printf("%d", bottle );
//	system("pause");
//}
//#include <stdio.h>
//#include <assert.h>
//
//
//
////char* my_strcpy(char *des, char*src )
////{
////	assert(src != '\0');
////	assert(des != '\0');
////	while (des = src)
////	{
////		des++;
////		src--;
////	}
////	return des;
////}
//char *my_strcpy(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *ret = dst;
//	while ((*dst = *src) != '\0')
//	{
//		*dst++;
//		*src++;
//	}
//		return ret;
//}
//int main()
//{
//	char des[] = "iam";
//	char src[] = "hello";
//	 char *str = my_strcpy(des, src);
//	//printf("%s", my_strcpy(des,src));
//	 printf("%s", str);
//	 system("pause");
//}
//用void 类型的函数实现 strcat
//#include <stdio.h>
//#include <assert.h>
//void my_strcat(char *dst, const char *src)
//{
//	//assert(dst != NULL);
//	//assert(src != NULL);
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 0; dst[i] != '\0'; i++)
//	{
//		count++;
//	}
//	//printf("%d", count);
//	while (*src != '\0')
//	{
//		
//		dst[count + j] = *src;
//		j++;
//		src++;
//	}
//	//return dst;
//	printf("%s", dst);
//}
//int main()
//{
//	char arr[99] = "hi";
//	char str[] = "bit what changworld";
//	my_strcat(arr, str);
//	//printf("%s", my_strcat(arr, str));
//	system("pause");
//}
// 用char*类型 实现strcat
// #include <stdio.h>
//#include <assert.h>
//char* my_strcat(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 0; dst[i] != '\0'; i++)
//	{
//		count++;
//	}
//	//printf("%d", count);
//	//char *ret = dst;
//	while (*src != '\0')
//	{
//		
//		dst[count + j] = *src;
//		j++;
//		src++;
//	}
//	return dst;
//	//printf("%s", dst);
//}
//int main()
//{
//	char arr[99] = "hi";
//	char str[] = "bit what changworld";
//	//my_strcat(arr, str);
//	printf("%s", my_strcat(arr, str));
//	system("pause");
//}
//再来一次 实现strcpy函数
//#include <stdio.h>
//#include <assert.h>
//char * my_strcpy(char* dst, char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *ret = dst; // 注意这里一定得定义一个 char*型的变量存放dst,但是为什么那？？
//	while (*dst = *src)
//	{
//		dst++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "Ilove";
//	char str[] = "child";
//	printf("%s",my_strcpy(arr, str));
//	system("pause");
//}