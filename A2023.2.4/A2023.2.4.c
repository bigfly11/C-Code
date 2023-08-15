//
// Created by 26948 on 2023/2/4.
//
#include<stdio.h>
#include<assert.h>

//模拟实现strncat
char*my_strncat( char *p1,const char *p2,int n)//没有传进来sizeof大小，只能先找\0
{
    char*ret=p1;
    while(*p1!='\0')
    {
        p1++;
    }
    while(n--)
    {
        *(p1++)=*(p2++);
    }

    return p1;
}
int main()
{
    char arr1[20]="to be";
    char arr2[20]="or not to be";
    char *p=NULL;
    p=my_strncat(arr1,arr2,6);
    return 0;
}