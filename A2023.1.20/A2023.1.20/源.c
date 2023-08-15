#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int arr[20] = { 0 };
//	int(*p)[20] = &arr;
//	return 0;
//}
////二位数组首元素是第一行！
//void print(int(*p)[3], int h, int l)
//{
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < l; j++)
//		{                                //二维数组首元素是第一行
//			printf("%d", *(*(p + i) + j));//*(p+i)是第几行的首个元素，再加上j就是每一行的每一个元素
//		}
//	}
//}
//int main()
//{
//	int arr[2][3] = { {1,2,3},{2,3,4} };
//	print(arr, 2, 3);
//
//	return 0;
//}

//sizeof算出的结果是unsigned int有符号数和无符号数进行比较
//时先将有符号数变为无符号数，就是把有符号二进制序列直接看作无符号数，则就是无穷大的数
//求类似2+22+222+2222规律的和
//int main()
//{
//	int a = 0; int i = 0; int b = 0;//b表示循环多少个数
//	int ret = 0; int sum = 0;
//	scanf("%d%d", &a,&b);
//	for (i = 0; i < b; i++)
//	{
//		ret = 10 *ret+ a;
//		sum = ret + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
//void print(int*p)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *(p+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	print(arr);
//	return 0;
//}
//求1到10000水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		//判断几位数
//		while ( tmp/ 10)
//		{
//			tmp = tmp/ 10;
//			count++;
//		}
//		//计算i的每一位n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//		    sum=sum+pow(tmp % 10, count);//pow计算乘方,头文件math.h
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//打印菱形
//int main()
//{
//	int i = 0; 
//	int line = 0;
//	scanf("%d", &line);//a代表上面行数
//
//	for (i = 0; i <line; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < line - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	while (empty >= 2)
//	{
//		total = empty / 2 + total;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//void move(int arr[9], int sz)
//{
//	int left = 0; int right = left + sz - 1;
//	//找奇数
//	while (left < right && arr[left] % 2 == 1)
//	{
//		left++;
//	}
//	//找偶数
//	while (left < right && arr[right] % 2 ==0)
//	{
//		right--;
//	}
//	int tmp = 0;
//	tmp=arr[left];
//	arr[left] = arr[right];
//	arr[right] = arr[left];
//
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr ,sz);
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0; int j = 0;
//	for(i=0;i<10;i++)
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	//接着就是打印数组
//	return 0;
//}
//谁是凶手问题
int main()
{
	char  killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		printf("%c", killer);
	}
	return 0;
}