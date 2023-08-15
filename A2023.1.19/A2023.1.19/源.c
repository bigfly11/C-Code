#include<stdio.h>
//int main()
//{
//	//char是重点，只能存到127到-128
//	char a[1000] = { 0 }; int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}                       //sizeof直接将\0包括
//	printf("%d", strlen(a));//strlen找\0
//	return 0;
//}   //unsigned char 0到255
    //char-128到127
//float型指针也是访问4个字节
//32位E位8
//64位E位11
//int main()
//{
//    char arr1[] = "hello";
//    char arr2[] = "hello";//第一二行比较时两个数组所指向地址当然不同
//    char* cp1 = "hello";
//    char* cp2 = "hello";//三四行时指针指向同一常量字符串相通
//    return 0;
//}
int main()
{
    int a[3] = { 1,2,3 };
    int b[3] = { 2,3,4 };
    int* arr[2] = { a,b };
    for(int i=0;i<2;i++)
        for (int j = 0; j < 3; j++)
        {
            printf("%d", *(arr[i] + j));
           
        }
    printf("\n");
    return 0;
}
