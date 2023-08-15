//
// Created by 26948 on 2023/1/27.
//
#include<stdio.h>
#include<string.h>
//结构体指针传参
//struct S
//{
//    int arr[1000];
//    int num;
//};
//void print1(struct S s)
//{
//    printf("%d",s.num);
//}
////注意传地址接受写法
//void print2(const struct S*ps)//明显指针最好，占用空间小
//{
//    printf("%d",ps->num);
//}
//int main()
//{
//    struct S s={{1,2,3},10};
////    print1(s);
//    print2(&s);
//    return 0;
//}
//位段   存储类型只能为int ,unsigned int, signed int
//int每次开4个字节，char每次开1个字节，冒号后面的数字表示比特没，32个比特位为4个字节
//节省空间
//struct A
//{
//    //先开4个字节--32个比特位
//    int _a:2;
//    int _b:5;
//    int _c:10;
//   // 再开4个字节--32个比特位
//    int _d:30;
//};