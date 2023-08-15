#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//第一题做法一
//int main()
//{
//	printf("*\n");
//	printf("**\n");
//	printf("***\n");
//	return 0;
//}
//第一题做法二
//int main()
//{
//	int i = 0; int j = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 60;
//	float b = 993;
//	printf("%d\n", (a * 3 - 80) / 25);
//	printf("%.1lf\n", (b + 78) * 65 / 654 - 598);
//	return 0;
//
//}
//第三题
//int get_multiple(int x)
//{
//	int z = 0;
//	z = x * x;
//	return z;
//}
//int main()
//{
//	int x = 0;
//	printf("x=");
//	scanf("%d", &x);
//	int y = get_multiple(x);
//	printf("y=%d\n", y);
//	return 0;
//}
//第二题
//int main()
//{
//	int a = 60;
//	float b = 993;
//	printf("%d\n" ,(a * 3 - 80) / 25);
//	printf("%.1lf\n", (b + 78) * 65 / 654 - 598);
//	return 0;
//}
//第四题
//int main()
//{
//	int a = 0;
//	printf("r=");
//	scanf("%d", &a);
//	printf("周长=%.2lf\n",6.28 * a);
//	printf("面积-%.2lf\n",3.14 * a * a);
//	return 0;
//}
//第五题
//int main()
//{
//	int a = 0;
//	printf("车速:");
//	scanf("%d", &a) ;
//	if (a > 0 && a <= 59)
//	{
//		printf("低速行驶");
//	}
//	else if (60 <= a && a <= 120)
//	{
//		printf("超速行驶");
//	}
//	else if (a > 120)
//	{
//		printf("超速行驶");
//	}
//	return 0;
//}
//第六题
int main()
{
	int a = 0;
	scanf("%d", & a);
	if (a % 7 == 0)
	{
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}







