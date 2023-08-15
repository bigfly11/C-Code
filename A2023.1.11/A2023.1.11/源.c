#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;//用小数怎么做
//		                          //需要回顾。
//		flag = -flag;//交替加减
//	}
//	printf("%lf", sum);
//	return 0;
//}
// 
//弊端：都是负数无法计算。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int max =0;//改正 弊端都是负数无法计算
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)//轮番上阵
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//九九乘法表
//int main()
//{
//	int i ,j= 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d",i); printf("*"); printf("%d", j);
//			printf("=%d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//实现素数。
//可以直接用奇数，或者内循环到根号j即可
//int main()
//{
//	int i = 0; int j = 0; int x = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//试除，轮番上
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//		}
//		
//	}
//	return 0;
//}

//打印一个整数的每一位
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//递归求阶乘
//int Fac(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//		return (x * Fac(x - 1));
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//a代表多少项
//	int sum = Fac(a);
//	printf("%d", sum);
//	return 0;
//}
//非递归
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right =  my_strlen(arr) - 1;
//	int temp = 0;
//
//}
////递归
//void reverse_string(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名
//	printf("%s\n", arr);
//	return 0;
//}
//int digitsum(int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + digitsum(x / 10);
//	}
//	else
//	{
//		return x % 10;
//	}
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	sum = digitsum(a);
//	printf("%d", sum);
//	return 0;
//}
int Pow(int x, int y)//y为阶数
{
	int i = 1;
	int sum = 1;
	if (y == 0)
		return 1;
	//麻烦了
	//while (i <= y)
	//{
	//	i++;                    //自己写（x,y）让y就得减小自己没有想清
	//	sum = x * Pow( x, y-1);//想办法根据题要求走出循环，
	//}
	//return sum;
	return x * Pow(x, y - 1);
}
int main()
{
	int n = 0; int k = 0;
	scanf("%d%d", &n, &k);
	int mutl=Pow(n, k);
	printf("%d", mutl);
	return 0;
}