//
// Created by 26948 on 2023/2/2.
//
//scanf针对标准输入的格式化输入语句
//fscanf针对所有输入流的格式化输入语句
//sscanf从字符串数据中，读出格式化数据（转化为格式化数据）
//printf针对标准输出的格式化输出语句
//fprintf针对所有输出流的格式化输出语句
//sprintf把一个格式化数据，转变为字符串输出
//fseek(FILE指针，偏移多少个字节，从哪里偏移) //SEEK_CUR从当前位置，SEEK_END从文件最后位置，SEEK_SET从文件开始位置
//ftell(FILE指针)相对于起始位置的偏移量，记住如果前边有fseek读出来一个字符，此时偏移量在他的后边
//rewind（FILE指针）让文件恢复起始位置
//fgetc函数再正常读取时，返回字符的ASCII值
       //读取结束时返回EOF
//fgets函数在读取结束时返回NULL
       //正常读取时，返回存放字符串的空间的起始地址
//fread在正常读取时，返回实际读取到的完整元素个数
       //如果发现读取到的完整元素个数小于指定的元素个数，就是最后一次读取
#include<stdio.h>

//int main()
//{
//    FILE*pf1=fopen("test1.txt","r");
//    {
//        if(pf1==NULL)
//        {
//            return  1;
//        }
//    }
//    FILE*pf2=fopen("test21.txt","w");
//    {
//        if(pf2==NULL)
//        {
//            fclose(pf1);
//            pf1=NULL;
//            return 1;
//        }
//        int ch=0;
//        while((ch=fgetc(pf2))!=EOF)
//        {
//            fputc(ch,pf2);
//        }
//    }
//    return 0;
//}
//数据输出到文件，是先到缓冲区，并不是直接写进文件，只有程序运行结束或者刷新缓冲区才会进入文件