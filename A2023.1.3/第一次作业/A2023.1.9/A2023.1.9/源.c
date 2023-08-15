#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//��һ��
//int main()
//{
//	int a,y,z,x= 0;
//	int sum = 0;
//	int i = 0;	
//	int b = 0;
//	scanf("%d", &x);
//	y=x;
//	while (y>=10)
//	{
//		y= y/10;
//		sum++;
//	}
//	z=x;
//	for (i = 10;; i = 10)
//	{
//		a = z%i;
//		z = z / i;
//		b = b + a;
//		if (z %10==0)
//			break;
//	}
//	printf("%d\n", sum+1);
//	printf("%d", b);
//}
//�ڶ���forѭ��
//int main()
//{
//	int a,i,b = 0;
//	printf("�����ֵ��");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		b = b + i;
//	}
//	printf("ǰn���:%d", b);
//	return 0;
//}
//�ڶ���whileѭ��
int main()
{
	int b = 0;
	int a= 0;
	int i = 1;
	printf("������ֵ��");
	scanf("%d", &a);
	while (i <=a)
	{
		b = b + i;
		i++;
	}
	printf("ǰn��ͣ�%d", b);
	return 0;
}
//������forѭ��
//int get_min(int x ,int y)
//{
//	int z = 0;
//	if (x < y)
//		z = x;	
//	else
//		z = y;
//	return z;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int j = 0;
//	int i=0 ;
//	int a, b = 0;
//	int o = 0;
//	scanf("%d%d",&a,&b);
//	int min = get_min(a, b); int max = get_max(a, b);
//	for (i=min; i<=max ; i++)
//	{
//		if (i % 2 == 0)
//		{
//			o++;
//		}
//		else
//			j++;
//	}
//	printf("����������%d\nż��������%d",j,o);
//	return 0;
//}
// ������whileѭ��
//int get_min(int x, int y)
//{
//	int z = 0;
//	if (x < y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a,b = 0;
//	int j = 0; int o = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b); int min = get_min(a, b);
//	int i = min;
//	while (i >= min && i <= max)
//	{
//		if (i % 2 == 0)
//		{
//			o++;
//		}
//		else
//			j++;
//		i++;
//	}
//	printf("ż��������%d\n����������%d", o, j);
//	return 0;
//}
// ������forѭ��
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int n,m= 0;//n��������ֵ��Ŀm����Ƚϵ���
//	scanf("%d%d" ,&n,&m);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d ", &i);
//		if (i % m == 0)
//		{
//			sum++;
//		}
//	}
//	printf("%d ",sum);
//	return 0;
//}
// ������whileѭ��
//int main()
//{
//	int i = 0;
//	int a,b,j= 0;
//	scanf("%d%d", &a,&b);
//	while (i < a)
//	{
//		i++;
//		scanf("%d", &i);
//		if (i % b == 0)
//			j++;
//	}
//	printf("%d", j);
//	return 0;
//}
// ������
//int main()
//{
//	int b = 0;
//	int g = 0;
//	int s = 0;
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int b = i /100;//��λ
//		int s = i / 10 %10;//ʮλ
//		int g = i % 10;//��λ
//		if(i== b * b * b + s * s * s + g * g * g)
//		{
//			printf("%d\n", i);
//		}	
//	}
//	return 0;
//}



















