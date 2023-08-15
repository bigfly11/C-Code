//
// Created by 26948 on 2023/2/1.
//
//fopen("文件名"，"打开方式")  返回值为FILE型指针，
//fclose（FILE 类型指针）并将指针初始化为NULL
//一个字符一个字符操作，依次向后读，依次向后写,进行写入时，若没有这个文件，则会创建一个
//fputc('字符'，fopen产生的FILE类型指针)
//fgetc（指针）返回值为字符的阿斯克码值，用int接受,读到最后空白时返回值为EOF(-1)
//读写字符串也是依次向后
//fputs("字符串"，FILE指针)输入一串数据
//fgets(char*string,int n,FILE*stream)从流中读n个数据（包含\0）数据(其实就读了n-1个)，放入到string中
#include<stdio.h>
//int main()
//{
//    FILE*pf=fopen("test,dat","w");//w为写，r为读
//    if(pf==NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fputc('a',pf);
//    fputs("aad",pf);
//    //关闭文件
//    fclose(pf);
//    pf=NULL;//最后一定制成空指针
//    return 0;
//}
//对格式化的数据写文件（只应用于格式文件）
//fscanf(FILE指针，"%d %s",&a,&b)
//fprintf(FILE指针，"%s %d",s.arr,s.num,s.sc)
//struct S
//{
//    char arr[10];
//    int num;
//    float sc;
//}s;
//int main()
//{
//    struct S s={"adad",19,1.0};
//    FILE*pf=fopen("test.c","w");
//    if(pf==NULL)
//    {
//        perror(fopen);
//        return 1;
//    }
//    //写入文件
//    fprintf(pf,"%s %d %f",s.arr,s.num,s.sc);
//    //读出文件
//    fscanf(pf,"%s %d %f",s.arr,&(s.num),&(s.sc));
//    printf("%s %d %f",s.arr,s.num,s.sc);
//    //关闭文件
//    fclose(pf);
//    pf=NULL;
//    return 0;
//}
//fwrite(要写入数据的地址,写入数据的单位字节大小，每次写入几个，要写入的外部文件的FILE指针)返回值为每次成功写入个数，与要求值无关
//fread(要求读到的内存地址，每个读取内容的单位大小，每次读取几个，要读取的外部文件的FILE指针)返回值为每次成功读取个数

