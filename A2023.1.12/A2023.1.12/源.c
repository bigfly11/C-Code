#include<stdio.h>
//int main()
//{
//    int arr[3][4] = { {1,2},{3,4} };
//    int i = 0;
//    int* p = &arr[0][0];
//    for (i = 0; i < 12; i++)
//    {
//        printf("%d", *p);
//        p++;
//    }
//    return 0;
//}
// 泡沫数列
//void sort(int arr[], int sz)
//{
//    //确定趟数
//
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)//第一次九个数比较，第二次八个数比较
//        {
//            int temp = 0;
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];         //用函数交换时才用&传地址
//                                       //写函数时交换值传地址
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//            }
//        }
//    }
//
//
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    sort(arr, sz);
//    printf("%");
//    return 0;
//}
//sizeof例外
//sizeof[数组名]-数组名表示整个数组
//&数组名-数组名表示整个数组

int main()
{
	int arr[10] = { 0 };
	int sum = sizeof(&arr);
	printf("%d", sum);
	return 0;

}