//
// Created by 26948 on 2023/1/28.
//
#include<stdio.h>
//int main()
//{
//    printf("haha");
//    return 0;
//}
//enum coler//枚举用逗号隔开
//          // 默认red为0，从未定义依次递增
//{
//    red,  //1  //4
//    green,//2  //7
//    blue  //3  //8
//
//};
//int main()
//{
//    int a=red;//此时a就为1
//    return 0;
//}

//联合体共用体，i和c和联合体公用一个地址，
//且i和c公用同一空间，空间大小至少为最大成员大小
//union Un
//{
//    int i;
//    char c;
//};


//用联合体确定大小端问题
int check_system()
{
    union S
    {
        int i;
        char a;//i占用四个字节，但a只占第一个字节
    } s;
    s.i=1;
    return s.a;
}
int main()
{
    int ret=check_system();
    if(ret==1)
    {
        printf("小端");
    }
    else
        printf("大端");

    return 0;
}
//联合体大小计算
//至少为最大成员大小
//当最大成员不是最大对齐数的整数倍时，就要对齐到最大整数倍11q'q'q'q'q
//Union Un
//{
//   char a[5];   大小为5，最大对齐数为4
//   int i;       最大对齐数为4
//}