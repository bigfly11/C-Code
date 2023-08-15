//
// Created by 26948 on 2023/1/26.
//
#include<stdio.h>
#include <string.h>
#include<assert.h>
//strstr 如果找到了返回值为被找字符串的找到首字母的地址
       //找不到返回空指针

//模拟实现strstr
//char*my_strstr(const char*str1,const char*str2)
//{
//    assert(str1&&str2);
//    const char *s1=NULL;const char*s2=NULL;
//    char*cp=str1;
//    if(*str2=='\0')
//    {
//        return (char*)str1;
//    }
//    while(*cp)
//    {
//        s1=cp;
//        s2=str2;
//        while(*s1&&*s2&&(*s1==*s2))
//        {
//            s1++;
//            s2++;
//        }
//        if(*s2=='\0')
//        {
//            return (char*)cp;
//        }
//        cp++;
//    }
//    return NULL;
//}
//int main()
//{
//    char arr1[]="abcdefabcdef";
//    char arr2[]="bcd";
//    char *ret=my_strstr(arr1,arr2);
//    if(ret==NULL)
//    {
//        printf("没找到");
//    }
//    else
//        printf("找到了");
//    return 0;
//}



//strtok,会改变原字符串,且原字符串要以\0结尾
//所以使用前先复制，第一次传字符串，以后传空指针
//返回值为每次切割后的字符串第一个字符地址
//int main()
//{
//    char arr[]="zpw@bite.tech";
//    char*p="@.";
//    char tmp[20]={0};
//    strcpy(tmp,arr);
//    char *ret=NULL;
//    //方法二
//    for(ret=strtok(tmp,p);ret!=NULL;ret=strtok(NULL,p))
//    {
//        printf("%s ",ret);
//    }
//    //方法一
////    ret=strtok(tmp,p);
////    printf("%s",ret);
////    ret=strtok(NULL,p);//传空指针才会在上面的代码基础上，继续切字符串
////    printf("%s",ret);
////    ret=strtok(NULL,p);
////    printf("%s",ret);
//    return 0;
//}
//streror,把错误码，转化为字符串信息
//        返回值为char*
//memcpy（arr1,arr2,k）拷贝内存函数,k是要拷贝的字节数字节数
//       只能拷贝不重叠内存，返回值为目标字符串地址
//模拟实现memcpy
//void*my_memcpy(void*dest,void*src,size_t num)//无类型无法解引用，转化为确定类型才能解引用
//{
//    void*ret=dest;
//    assert(dest&&src);
//    while(num--)
//    {
//        *(char*)dest=*(char*)src;//转化为char*后所有格式都可用
//        dest=(char*)dest+1;//强制类型转化后无法用++(重点看)
//        src=(char*)src+1;
//    }
//    return ret;
//}
//int main()
//{
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10]={0};
//    my_memcpy(arr1,arr2,20);
//    return 0;
//}
//memmove用法与memcpy使用方法一样，但可以拷贝重叠内存
//void*my_memmove(void*dest,const void*src,size_t num)
//{
//    void*ret=dest;
//    assert(dest&&src);
//    //目的字符串第一个地址在源字符串第一个地址之前（dest<src）从前向后
//    if(dest<src)
//    {
//        while(num--)
//        {
//            *(char*)dest=*(char*)src;//转化为char*所有格式都可用这个函数
//            dest=(char*)dest+1;
//            src=(char*)src+1;
//        }
//    }
//    //目的字符串第一个地址在源字符串第一个地址之后（dest<src）从后向前
//    else if(dest>src)
//    {
//        while(num--)
//        {
//            *((char*)dest+num)=*((char*)src+num);
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10]={0};
//    //my_memmove(arr1,arr1+2,20);
//    memcpy(arr1+2,arr1,20);
//    return 0;
//}
//内存比较函数memcpy(arr1,arr2,num)
//num与其他内存函数相同，表示字节。返回值与strcpy相同大于0，等于0，小于0


//memset内存设置（arr,内存中要放入的值,个数）
//struct s
//{
//    char c;
//    int i;
//}s1,s2;
//struct B
//{
//    double d;
//    struct s c;
//    char e;
//};
//int main()
//{
//    struct B sb={3.14,{'a',6},'s'};
//    printf("%lf %c %d %c",sb.d,sb.c.c,sb.c.i,sb.e);
//    return 0;
//}

//1.结构体的第一成员放在结构体变量在内存中存储位置的0偏移处开始
//2.从第二个成员往后的所有成员，都放在一个对齐数（成员的大小和默认对齐数的较小值）的整数的整数倍的地址处
//3.结构体总大小是结构体所有成员对齐数中最大的那个对齐数的整数倍
//4。如果嵌套了结构体，嵌套的结构体对齐到自己最大对齐数的整数倍处
//，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍