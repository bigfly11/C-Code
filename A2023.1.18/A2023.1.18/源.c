#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include<string.h>
//void my_strcpy(char *dest, const char* src)//const使src不能修改，只能在等号右边
//                                              如第七行
//{
//	assert(src != NULL);
//	assert(dest != NULL);//判断报错类似if
// char*ret=dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
// return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1,NULL);
//	printf("%s", arr1);
//
//	return 0;
//}
//const修饰变量，使这个变量不能修改。
//const如果放在*的左边时，修饰的是*p，表示指针指向的内容，不能通过指针修改
//int main()
//{
//	int a = 100;
//	int b = 10;
//	const int*  p = &a;
//	p = &b;
//	printf("%d", *p);
//	return 0;
//}
//int my_strlen(const char* arr)
//{ 
//	assert(arr != NULL);//arr才是指针
//	int count = 0;
//	while (*arr ++!= 0)//应该是*arr++让元素一直向后访问
//	{                  //*arr++一定不能忘
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len= my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int Numberof1(int a)
//{
//	int count = 0;
//	int i = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 10;
//	int sum = Numberof1(a);
//	printf("%d", sum);
//	return 0;
//}
//2的n次方数字的二进制数列只有一个一k&（k-1）即可判断
//统计两个数二进制有多少个不同
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = a ^ b;//a^b二进制相同时为0不相同时为1；
//	//统计一的个数
//	int  count = 0;
//	int i = 0;
//	//while (a)
//	//{
//	//	a = a & (a - 1);
//	//	count++;
// //    }
//	/*for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1 == 1) {
//			count++;
//		}
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	return 0;
//}

//最小公倍数
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d%d", &a, &b);
//
//	return 0;
//}
//实现将i love you.转变为.you love i
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	while(left<right)
//	{
//		char temp = 0;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++; right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	//整体逆序
//	reverse(arr, arr + len - 1);//arr表示开始时地址
//	//每个单词逆序
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s", arr);
//	return 0;
//}

//正整数：原反补码相同
//负整数；需计算，符号位为1，其他位按位取反，得到反码，反码加一就是补码。
//整数在内存中存补码。

//写代码验证机器的字节序大小端问题
int main()
{
	int a = 1;
	char *b = &a;
	if (*b == 1)
		printf("小端");
	return 0;
}
//unsigned char没有符号位，整型提升时向高位补0
//char以及signed char有符号位，整型提升时向高位补1，成为补码，再计算。、
//%d有符号数 %u无符号数