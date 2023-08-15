//
// Created by 26948 on 2023/1/30.
//
//动态空间使用
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//
//    int *p=(int*)malloc(10*sizeof(int));
//    p=NULL;
//    //使用这些空间时,先判断
//    if(p==NULL)
//    {
//        perror("main");
//        return 0;
//    }
//    free(p);//free传入指针释放
//    p=NULL;//手动变为空指针
//    return 0;
//}
//malloc返回值为void*,括号中是建立字节个数
//calloc(开辟字节数，每一个元素占多少字节)，而且全部初始化为0,返回值为void*
//realloc(要增加空间的地址，修改后的空间大小)
//如果在原地址后面继续开辟地址，空间够大，返回原空间指针
//如果再开辟后面的空间不够大，则重新找一处地址开辟足够大空间，将原空间内容拷贝过去，释放原来地址，返回新空间地址
//realloc有可能找不到空间开辟，返回空指针，所以不能用原地址接收，新创一个变量接受
//int main()
//{
//    //malloc返回值为void*,括号中是释放字节个数
//    //先开辟空间
//    int *p=(int*)malloc(10*sizeof(int));
//    p=NULL;
//    //使用这些空间时,先判断
//    if(p==NULL)
//    {
//        perror("main");
//        return 0;
//    }
//    int i;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=5;//不能用p++=i防止p低质改变
//    }
//   //空间不够，再开辟
//    int *ptr=(int*)realloc(p,20*sizeof(int));
//    if(ptr!=NULL)
//    {
//        p=ptr;
//    }
//    free(p);//free传入指针释放
//    p=NULL;//手动变为空指针
//    return 0;
//}
//也可以realloc(NULL,字节个数)起到malloc效果。
//动态内存开辟常见错误
//1.对NULL指针的解引用操作
//2.对动态开辟空间的越界访问
//3.使用free释放非动态的空间
//4.使用free释放一块动态空间一部分
int main()
{
    int*p=(int*)malloc(100);
    for(int i=0;i<5;i++)
    {
        *p++=i;//这时p向后走p位置改变
    }
    free(p);//错误写法
    return 0;
}
//5.对同一块空间多次释放，避免方法：每次释放完将开辟的地址赋值为NULL
//6.使用完一定释放，防止内存泄露