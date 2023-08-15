//
// Created by 26948 on 2023/1/25.
//
#include "stdio.h"
#include <string.h>
#include "assert.h"
//int main()
//{
//    return 0;
//}
//杨氏矩阵，不需要全部遍历，节省时间，可以直接去掉一行或一列
//int find_number(int arr[3][3],int r,int c,int k)
//{
//    int x=0;int y=c-1;
//    while(x<r&&y>=0)
//    {
//        if(arr[x][y]<k)
//        {
//            x++;
//        }
//        else if(arr[x][y]>k)
//        {
//            y--;
//        }
//        else
//            return 1;
//    }
//    return 0;//找到最后根本找不到
//}

//要想实现将坐标打印则采用以下方法
//int find_number(int arr[3][3],int *px,int *py,int k)
//{
//    int x=0;int y=*py-1;//选择位置重要
//    while(x<*px && y>=0)
//    {
//        if(arr[x][y]<k)
//        {
//            x++;
//        }
//        else if(arr[x][y]>k)
//        {
//            y--;
//        }
//        else
//            *px=x;
//            *py=y;//此时直接把地址付给55，56行x，y
//            return 1;
//    }
//    return 0;//找到最后根本找不到
//}
//int main()
//{
//    int arr[3][3]={1,2,3,4,5,6,7,8,9};
//    int k=5;
//    int ret=find_number(arr,3,3,k);
//    int x=3;
//    int y=3;
//    //&x,&y第一个作用，将值传入函数
//           //第二个作用将值带出函数，带回值
//    int ret=find_number(arr,&x,&y,k);
//    if(ret==1)
//    {
//        printf("找到了\n");
//        printf("%d %d",x,y);
//    }
//    else
//    {
//        printf("找不到");
//    }
//    return 0;
//}
//字符左旋转：如ABCDE交换一个变为BCDEA
//void string_left_rotate(char *str,int k)
//{
//    int i=0;
//    int n=strlen(str);
//    for(i=0;i<k;i++)
//    {
//        char tmp=*str;int j=0;
//        //后边n-1个字符往前挪动
//        for(j=0;j<n-1;j++)
//        {
//            *(str+j)=*(str+j+1);
//        }
//        //把tmp放在最后
//        *(str+n-1)=tmp;
//    }
//}
//三步翻转法
////第二种方法：先逆序左边，再逆序右边，最后整体逆序
//void reverse(char*left,char*right)
//{
//    assert(left);
//    assert(right);
//    while(left<right)
//    {
//        //地址交换的写法*******（重点看）
//        char tmp=*left;
//        *left=*right;
//        *right=tmp;
//        left++;
//        right--;
//    }
//
//}
//void string_left_rotate(char *str,int k)
//{
//    assert(str);
//    int n=strlen(str);
//    reverse(str,str+k-1);//zuo
//    reverse(str+k,str+n-1);//you
//    reverse(str,str+n-1);//整体
//
//}
//int main()
//{
//    char arr[10]="ABCDEF";
//    int k=2;
//    string_left_rotate(arr,k);
//    printf("%s",arr);
//    return 0;
//}
//比较字符串是否是旋转得来的
////暴力穷举发
//int is_string_rote(char*str1,char*str2)
//{
//    int len =strlen(str1);
//    int i=0;
//    for(i=0;i<len;i++)
//    {
//        //每次左旋一个
//        char tmp=*str1;
//        int j=0;
//        for(j=0;j<len-1;j++)
//        {
//            *(str1+j)=*(str1+j+1);
//        }
//        //最后放入最后一个字符
//        *(str1+len-1)=tmp;
//        //等于0说明相等
//        if(strcmp(str1,str2)==0)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[]="AABCD";
//    char arr2[]="BCDAA";
//    int ret=is_string_rote(arr1,arr2);
//    if(ret==1)
//    {
//        printf("yes");
//    }
//    else
//        printf("no");
//    return 0;
//}
//创造一个AABCDAABCD进行比较
//全都用库函数
//int is_string_rote(char *str1,char *str2)
//{
//    //如果两个字符串不相等一定不是旋转得来的
//    if(strlen(str1)!=strlen(str2))
//    {
//        return 0;
//    }
//    //字符串追加
//    int len =strlen(str1);
//    strncat(str1,str1,len);
//    //字符串查找函数
//    char *ret= strstr(str1,str2);
//    return ret!=NULL;//学习简化（重点看）
//}
//int main()
//{
//    char arr1[]="AABCD";
//    char arr2[]="BCDAA";
//    int ret=is_string_rote(arr1,arr2);
//    if(ret==1)
//    {
//        printf("yes");
//    }
//    else
//        printf("no");
//    return 0;
//}
//下面哪个函数参数设计的好
//int arr[3][5]={1,2,3,4,5,6,7,8,9,10}
//print_arr(arr,3,5)
//A void print_arr(int arr[][],int row,int col) 错误 数组接受参数可以省略行，不能省略列
//B void print_arr(int *arr,int row,int col) 很明显的错误
//C void print_arr(int (*arr)[5],int row,int col) 正确，传进来的就是数组首元素地址就是第一行
//D void print_arr(int(*arr)[3],int row,int col) 错误
//



//strlen求字符长度必须有\0，但是算\0之前的数，函数返回值为无符号数，以下为例题
//int main()
//{
//    if(strlen("abc")-strlen("abcdef")>0)//这里算出的数虽然为-3，但内存中当他为无符号数，则将会是一个很大的数。
//    {
//        printf(">");
//    }
//    else
//        printf("<=");
//    return 0;
//}


//strcpy 原字符串包含\0，拷贝\0之前的字符strcpy(（拷到）地址一，（要考的字符串）地址二)，
//      空间要足够,目标字符串必须可以改变,个数限制用strncpy

//strcat字符串追加，字符串连接
//      源字符串和目标字符串必须都以\0结束
//      目标空间必须可修改，且空间足够大，但是不能自己追加自己自己追加自己用strncat
//模拟实现strcat
//char* my_strcat(char*dest,const char*src)
//{
//    char*ret=dest;
//    assert(dest&&src);
//    //先找到\0
//    while(*dest)
//    {
//        dest++;
//    }
//    //追加包含\0,把前一个\0整没了，所以不能自己给自己附加字符串
//    while(*dest++=*src++)
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[]="hello ";
//    char arr2[]="world";
//    my_strcat(arr1,arr2);
//    printf("%s",arr1);
//    return 0;
//}


//strcmp字符串比较
//实现strcmp
int my_strcmp(const char*p,const char*q)
{
    assert(p&&q);
    while(*p==*q)
    {
        if(*p==0)
        {
            return 0;
        }
        p++;
        q++;
    }
//    if(*p>*q)
//    {
//        return 1;
//    }
//    if(*p<*q)
//    {
//        return -1;
//    }
    return *p-*q;//比较ACS11码
}
int main()
{
    char*p="abcdef";
    char*q="abqd";
    int ret=my_strcmp(p,q);
    if(ret>0)
    {
        printf("p>q");
    }
    else if(ret<0)
    {
        printf("p<q");
    }
    else
        printf("p==q");
    return 0;
}




