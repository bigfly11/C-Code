#include<stdio.h>
//交换值用地址
//void swap(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��%d %d", a, b);
//	swap(&a, &b);
//	printf("������%d %d", a, b);
//}


//#include<stdio.h>
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid]> k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1
//	int ret = binary_search(arr, key, sz);
//	if (ret ==-1)
//	{
//		printf("���б���û��");
//	}
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d ", ret);
//	return 0;
//}
//int main()
//{
//	int b = 0;
//	int g = 0;
//	int s = 0;
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int b = i / 100;//��λ
//		int s = i / 10 % 10;//ʮλ
//		if (i == b * b * b + s * s * s + g * g * g);
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
