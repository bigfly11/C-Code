//
// Created by 26948 on 2023/1/31.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void getmemory(char*p)             //getmemory（）函数传进去的是str值，p只是str的一份临时拷贝。不会改变str,而且p是局部变量,除了作用域就会销毁
//                                  //无法影响外边的str中，所以当getmemory返回之后，str依然为NULL，strcpy也会失败，
//{                                    //而且p会销毁，造成内存泄漏
//
//    p=(char*)malloc(100);
//}
//void test()
//{
//    char *str=NULL;
//    getmemory(str);
//    strcpy(str,"hello world");
//    printf(str);//传进来str，也起到了printf("hello world")的作用
//}
//int main()
//{
//    test();
//    return 0;
//}
//改1
//void getmemory(char**p)//str的地址就是二级指针
//{
//    *p=(char*)malloc(100);//*p就是外边的str
//}
//void test()
//{
//    char *str=NULL;
//    getmemory(&str);
//    strcpy(str,"hello world");
//    printf(str);//传进来str，也起到了printf("hello world")的作用
//    free(str);//一定要内存释放
//    str=NULL;
//}

//int main()
//{
//    test();
//    return 0;
//}
//gai2
//char* getmemory(char*p)
//{
//    p=(char*)malloc(100);
//    return p;
//}
//void test()
//{
//    char *str=NULL;
//    str= getmemory(str);
//    strcpy(str,"hello world");
//    printf(str);//传进来str，也起到了printf("hello world")的作用
//    free(str);//一定要内存释放
//    str=NULL;
//}
//int main()
//{
//    test();
//    return 0;
//}

//char*getmemory()
//{
//    char p[]="hello world";//在栈上开辟的空间，出了这个函数，就销毁，没有任何意义
//                           //上边改2，能用return返回是因为此时malloc是在堆上开辟空间
//                            //只有main函数执行完毕或人为释放才会销毁
//    return p;
//}
//void test(void)
//{
//    char *str=NULL;
//    str=getmemory();
//    printf(str);
//}
//int main()
//{
//    test();
//    return 0;
//}
//int*f2()
//{
//    int*ptr;//野指针问题，指针创建出来后就要初始化，指针要么初始化，要么指向已知空间
//    *ptr=10;
//    return ptr;
//}
//int main()
//{
//    f2();
//    return 0;
//}
//void getmemory(char**p,int num)
//{
//    *p=(char*)malloc(num);
//}
//void test()
//{
//    char*str=NULL;
//    getmemory(&str,100);
//    strcpy(str,"hello");
//    printf(str);//动态内存一定释放，这道题就是没有释放
//    free(str);//free后一定加free不然就成野指针
//    str=NULL;
//}
//int main()
//{
//    test();
//    return 0;
//}


//struct S
//{
//    int n;
//    int *arr;
//};
//int main()
//{
//    struct S*pc=(struct S*)malloc(sizeof(struct S));
////    pc=NULL;
//    if(pc==NULL)
//    {
//        return 1;
//    }
//    return 0;
//}
//打印5*5X图形
//int main()
//{
//    int n=0;
//    while(scanf("%d",&n)!=EOF)
//    {
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<n;j++)
//            {
//                if(i==j)
//                {
//                   printf("*");
//                }
//                else if(i+j==n-1)
//                {
//                    printf("*");
//                }
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//算7个人除去最大值和最小值的平均成绩
//int main()
//{
//    int i=0;int a=0;
//    int max=0;int min=100;int sum=0;
//    for(i=0;i<7;i++)//一个循环既求了和也求了最大值和最小值
//    {
//        scanf("%d",&a);
//        sum=sum+a;
//        if(a>max)
//        {
//            max=a;
//        }
//        else if(a<min)
//        {
//            min=a;
//        }
//        printf("%.2f",(sum-min-max)/5.0);//除5.0才能输出小数
//    }
//    return 0;
//
int main()
{
    int a=0;
    scanf("%d",&a);
    int arr[100]={0};
    for(int i=0;i<a;i++)
    {
        int b = 0;
        scanf("%d", &b);
        arr[i] = b;
    }
//输入要插入的数
   int b=0;
    scanf("%d",&b);
    for(int i=0;i<a;i++)
    {
        if(arr[a-1-i]>b)
        {
            arr[a-i]=arr[a-1-i];
            arr[a-1-i]=b;
        }
        else//放最大的数，忘了考虑插入的数比所有的数都小
            arr[a]=b;
    }
    for(int i=0;i<=a;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}