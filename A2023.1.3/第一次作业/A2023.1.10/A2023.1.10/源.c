#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
////函数的递归
// int print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//	return 0;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}
//void test(int n)
//{
//	if (n < 10)
//	{
//		test(n+1);//栈溢出，递归太深
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
 
 
 
 
 
//实现一个strlen函数
//创建一个临时变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//不创建临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//实现一个strlen函数
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int main()
//{
//	int i = 0; int j = 1;
//	int mut = 1;
//	scanf("%d", &mut);
//	for (i = 1; i <= mut; i++)
//	{
//		j = i * j;
//	}
//	printf("%d", j);
//		return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//斐波那契数列
//int FBNQ(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return FBNQ(x - 1) + FBNQ(x - 2);
//}
//
//int main()
//{
//	//a代表项数，sum代表前a项和
//	int a = 0;
//	scanf("%d", &a);
//	int sum = FBNQ(a);
//	printf("%d", sum);
//	return 0;
//}
//非递归
//int FBNQ(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = FBNQ(n);
//	printf("%d", sum);
//	return 0;
//}
int Fac(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
		return (x * Fac(x - 1));
}
int main()
{
	int a = 0;
	scanf("%d", a);//a代表多少项
	int sum = Fac(a);
	printf("%d", sum);
	return 0;
}



