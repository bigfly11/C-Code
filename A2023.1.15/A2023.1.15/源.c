#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    n = n / 2 + 1;
//    for (i = 1; i <= n; i++)//将菱形分为上下两部分，n控制上三角行数 
//    {
//        for (j = 1; j <= n + i - 1; j++)//控制每行的每个位置打印什么 
//            if (j == n - i + 1 || j == n + i - 1)//控制什么时候打印*号 
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    for (i = 1; i < n; i++)//控制下三角形的行数 
//    {
//        for (j = 1; j <= 2 * n - i - 1; j++)
//            if (j == i + 1 || j == 2 * n - i - 1)
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return 0;
// 
////第二题
//int main()
//{
//	int n = 0; int i = 0; int j = 0;
//	printf("数据组数：");
//	scanf("%d", &n);
//	int arr[10000] = {0};
//	for (i = 0; i < n; i++)
//	{
//		int x = 0; int y = 0;
//		printf("输入数据：");
//		scanf("%d%d", &x, &y);
//		 arr[i] = x + y;//数据储存
//	}
//	int sum = 0;
//	printf("输出结果为：");
//	for (j = 0; j < n; j++)
//	{
//		sum = arr[j];
//		printf(" %d ", sum);
//	}
//	return 0;
//}

//第三题
//int main()
//{
//	int arr[100] = { 0 };
//	int n; int i; int j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		arr[i] = x;
//	}	
//	int min = arr[0]; int max = arr[0];
//	for (j = 0; j < n; j++)
//	{
//		if (arr[j]<min)
//		{
//			min = arr[j];
//		}
//		if (arr[j] > max)
//		{
//			max = arr[j];
//		}
//	}
//	printf("min=%d\nmax=%d", min,max);
//	return 0;
//}

//第四题
int main()
{
	int m = 0; int n = 0;//m为行n为列
	scanf("%d%d", &m, &n);
	int arr[100][100] = { 0 };
	int i = 0; int j = 0;
	for ( i = 0; i < m; i++) 
	{
		for ( j = 0; j < n; j++)
		{
			int x = 0;
			scanf("%d", &x);
			arr[i][j] = x;
		}
	}
	int max = arr[0][0];
	for ( i = 0; i < m; i++)//hang
	{
		for ( j = 0; j < n; j++)//lie
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	printf("最大值为：%d\n 所在行%d 所在列%d",max,i,j);
	return 0;
}

////第五题
//int main()
//{
//	 int n = 0;//n为行n为列
//	scanf("%d",  &n);
//	int arr[100][100] = { 0 };
//	int i = 0; int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			int x = 0;
//			scanf("%d", &x);
//			arr[i][j] = x;
//		}
//	}
//	int sum = 0; int SUM = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			
//			if (i == j)
//				sum = sum + arr[i][j];
//			if (i + j == n-1  )
//			{
//				SUM = SUM + arr[i][j];
//			}
//		}
//	}
//	printf("主对角线之和：%d\n 次对角线之和：%d", sum,SUM);
//}