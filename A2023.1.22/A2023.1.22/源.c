#define _CRT_SECURE_NO_WARNINGS
//函数指针计算器
#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		 int x = 0; int y = 0;
//		scanf("%d", &input);
//		if (input <= 5 && input > 0)
//		{
//			int(*pf[5])(int, int) = { NULL,add,sub,mul,div };
//			scanf("%d%d", &x, &y);
//			int ret = (*pf[input])(x, y);
//			printf("%d", ret);
//		}
//	} while (input);
//	return 0;
//}
//函数指针数组，存放同类指针。详情见第29列
// 整形数组
// int arr[5];
// int(*p1)[5]=&arr;
// 整形指针数组
// int*arr[5];
// int*(*p2)=&arr;
// 函数指针数组
//int (*p)(int ,int)函数指针
//int(*p2[4])(int,int)函数指针数组
// int(*(*p3)[4])(int,int)=&p2取出的是函数指针数组的地址
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void meun()
//{
//	printf("1，加，2，减，3乘，4除\n");
//}
////实现函数回调减少代码冗余
//int calcs(int(*pf)(int, int))
//{
//	int x = 0; int y = 0;
//	scanf("%d%d", &x ,& y);
//	return pf(x, y);
//}
//int main()
//{
//	
//	int input = 0;
//	do 
//	{ 
//		 meun();
//		 int ret = 0;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				ret = calcs(&add);
//				printf("%d\n", ret);
//				break;
//		case 2:
//				 ret = calcs(&sub);
//				printf("%d\n", ret);
//				break;
//		case 3:
//				ret = calcs(&mul);
//				printf("%d\n", ret);
//				break;
//		case 4:
//			    ret = calcs(&div);
//				printf("%d\n", ret);
//				break;
//		case 0:
//			printf("退出程序\n");
//		default:
//			printf("选择错误，重新选择");
//		}
//		
//	} while (input);
//	return 0;
//}
//实现qsort
//qsort什么类型都可以排。
//int comp_int(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;//强制转化写法。//根据这里改变正序逆序
//	                                             //根据返回值与0的比较来排序，所以在这里变正逆序
//}
////排列整形
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int szi = sizeof(arr[0]);
//	qsort(arr, sz, szi, comp_int);
//}
////排列
//void test2()
//{
//
//}
//int main()
//{
//	//test1;
//	test2;
//	return 0;
//}
//模拟qsort