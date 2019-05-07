#define _CRT_SECURE_NO_WARNINGS 1 
//1.实现strcpy
//2.实现strcat
//3.实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove
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
//	char arr1[] = "abdaadd";       //写[]数组长度是可变的，可以将arr2赋给arr1，不写【】不能执行
// 	char arr2[] = "dedaff";
//	//my_strcpy(arr1, arr2);
//	printf("%s", my_strcpy(arr1,arr2));
//	system("pause");
//}
//char* my_strcat( const char* dst, const char *src)
//{
//	assert(dst && src);
//	char * ret = dst;
//	while (*dst++);//当且仅当dst为'/0'时，不成立，但此时*dst++返回的是'\0’，此时dst指向'\0‘的下一位
//	dst--;//或--dst , 让dst指向'\0’这样就将字符串啊src全部覆盖dst（包括‘\0’)
//	while (*dst++ = *src++);//直到src为'\0'时结束拼接
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "cdefg";
//	printf("%s", my_strcat(arr1, arr2));
//	system("pause");
//}
//strstr 判断arr2是不是arr1的子字符串，若是返回arr2的地址，若不是返回空指针。
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
//
//void *Memmove(void *dst, const void *src, size_t size)
//{
//	char *psrc;
//	char *pdst;
//
//	if (NULL == dst || NULL == src)
//	{
//		return NULL;
//	}
//	
//	if ((src < dst) && (char *)src + size >(char *)dst) // 自后向前拷贝
//	{                       //指针所指向scr的位置+size的大小 在dst指针的下面
//		psrc = (char *)src + size - 1;
//		pdst = (char *)dst + size - 1;
//		while (size--)
//		{
//			*pdst-- = *psrc--;
//		}
//	}
//	else
//	{
//		psrc = (char *)src;
//		pdst = (char *)dst;
//		while (size--)
//		{
//			*pdst++ = *psrc++;
//		}
//	}
//
//	return dst;
//}
//int main()
//{
//	char arr1[] = "Ilove";
//	char arr2[] = "AB";
//	printf("%s", my_memcpy(arr1, arr2, 1));
//	system("pause");
//}
//方法二。
//void* my_memcpy(void* dst, const void* src, size_t n)
//{
//	char *tmp = (char*)dst;
//	char *s_src = (char*)src;
//
//	while (n--) {
//		*tmp++ = *s_src++;
//	}
//	return dst;
//}
////char* 类型的memcpy
////char* my_memcpy(char *dst, const char* src,size_t n)
////{
////	assert(dst&&src);
////	char *ret = dst;
////	while (*dst++);
////	--dst;
////	for (int i = 0; i<n; i++)
////	{
////		*dst = *src;
////		dst++;
////		src++;
////		*dst = '\0';
////	}
////	return ret;
////}
//int main()
//{
//	char arr1[] = "Ilove";
//	char arr2[] = "AB";
//	printf("%s", my_memcpy(arr1, arr2, 1));
//	system("pause");
//}
void *my_memmove(void*dst, const void *src, size_t n)
{
	char * s_dst = (char*)dst;
	char * s_src = (char*)src;



}