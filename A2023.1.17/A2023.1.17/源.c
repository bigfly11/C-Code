#include<stdio.h>
//int main()
//{ 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int* spend = p + 8;
//	while(p <= spend) 
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}
////指针减去指针为两指针间个数。
//int my_strlen(char* str) 
//{
//	char* spend =  str;
//	while (*str != '\0')//'\0'
//	{
//		str++;
//	}
//	
//	return str-spend;
//}
//int main()
//{
//	//求字符串长度，不是数组
//	int a = my_strlen("bit");
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = &arr;
//	for (p = &arr[5]; p >&arr[0];)
//	{
//		*--p=0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针int*为类型 *ppa为名
//	int* parr[5]; //存放指针数组 
//	return 0;
//}

struct stu
{
	char name[1];
	int age;
};
int main()
{

	struct stu L = { '5',21};
	printf("%c", L.age);
	return 0;
}