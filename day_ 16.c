#define _CRT_SECURE_NO_WARNINGS 1 
//1.ʵ��strcpy
//2.ʵ��strcat
//3.ʵ��strstr
//4.ʵ��strchr
//5.ʵ��strcmp
//6.ʵ��memcpy
//7.ʵ��memmove
#include  <stdio.h>
#include  <assert.h>
//char *my_strcpy( char* dst, const char * src)
//{
//	assert(dst && src);
//	char *ret = dst;
//	while (*dst++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abdaadd";       //д[]���鳤���ǿɱ�ģ����Խ�arr2����arr1����д��������ִ��
// 	char arr2[] = "dedaff";
//	//my_strcpy(arr1, arr2);
//	printf("%s", my_strcpy(arr1,arr2));
//	system("pause");
//}
//char* my_strcat( const char* dst, const char *src)
//{
//	assert(dst && src);
//	char * ret = dst;
//	while (*dst++);//���ҽ���dstΪ'/0'ʱ��������������ʱ*dst++���ص���'\0������ʱdstָ��'\0������һλ
//	dst--;//��--dst , ��dstָ��'\0�������ͽ��ַ�����srcȫ������dst��������\0��)
//	while (*dst++ = *src++);//ֱ��srcΪ'\0'ʱ����ƴ��
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "cdefg";
//	printf("%s", my_strcat(arr1, arr2));
//	system("pause");
//}
//strstr �ж�arr2�ǲ���arr1�����ַ��������Ƿ���arr2�ĵ�ַ�������Ƿ��ؿ�ָ�롣
//char * my_strstr(char * dst, const char * src)
//{
//	assert(dst && src);
//	char* ret = src;
//	int i = 0;
//	int j = 0;
//	for (i = 0; dst[i] != '\0'; i++)
//	{
//		for (j = 0; src[j] != '\0'; j++)
//		{
//			if (dst[i] == src[j])
//				return ret;
//		}
//	}
//	return NULL;
//
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "defg";
//	printf("%s", my_strstr(arr1, arr2));
//	system("pause");
//}
//char *my_strchr(const char * dst, int c)
//{
//	assert(dst);
//	while (*dst++ == c);
//	char * ret = dst;
//	return ret;
//	while (*dst++ != c)
//		return NULL;
//}
//int main()
//{
//	char str[] = "i love moneky";
//	char *str_point = my_strchr(str, 26);
//	printf("%s", str_point);
//	system("pause");
//
//}
//int my_strcmp(const char* dst, const char *src)
//{
//	assert(dst && src);
//	while ((*src != '\0') && (*dst != '\0'))
//	{
//		if (*dst > *src)
//		{
//			return  1;
//		}
//		if (*dst < *src)
//		{
//			return -1;
//		}
//		src++;
//		dst++;
//
//	}
//
//	if ((*dst != '\0')&& (*src == '\0'))
//	{
//		return 1;
//	}
//	else if ((*src != '\0')&& (*dst == '\0'))
//	{
//		return -1;
//	}
//	else
//	return 0;
//
//	
//}
//int main()
//{
//	char arr1[] = "abe";
//	char arr2[] = "abe";
//	printf("%d",my_strcmp(arr1, arr2));
//	system("pause");
//}
void* my_memcpy(const char* dst, const char* src)
{

}