#define _CRT_SECURE_NO_WARNINGS 1 
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int a = 1;
//	int b;
//	int bottle = 20;
//	int empty_bottle = 20;
//	//empty_bottle+= bottle/2
//	// 20ƿ  20��ƿ  ��10ƿ 10����ƿ ��5ƿ 5����ƿ ��2ƿ 2+1=3����ƿ ��1ƿ 2����ƿ �ٻ�1ƿ
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
//��void ���͵ĺ���ʵ�� strcat
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
// ��char*���� ʵ��strcat
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
//����һ�� ʵ��strcpy����
//#include <stdio.h>
//#include <assert.h>
//char * my_strcpy(char* dst, char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *ret = dst; // ע������һ���ö���һ�� char*�͵ı������dst,����Ϊʲô�ǣ���
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