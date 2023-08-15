//
// Created by 26948 on 2023/1/28.
//
#include"contact.h"

void InitContact(Contact*pc)
{
    pc->sz = 0;
    //memset(目标地址，要初始化内容，初始化字节个数)
    memset(pc->date, 0, sizeof(pc->date));
}
void Addcontact(Contact*p)
{
    if(p->sz==MAX)
    {
        printf("通讯录已满");
        return ;
    }
    printf("请输入名字：");
    scanf("%s",p->date[p->sz].name);//数组名直接就是首元素地址，不用再加&
    printf("请输入性别：");
    scanf("%s",p->date[p->sz].sex);
    printf("请输入名字：");
    scanf("%d",&(p->date[p->sz].age));
    printf("请输入名字：");
    scanf("%s",p->date[p->sz].tele);
    printf("请输入名字：");
    scanf("%s",p->date[p->sz].addr);
    p->sz++;
    printf("录入成功");
}
void PrintContact(const Contact*p1)
{
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","地址");
    int i=0;
    for(i=0;i<p1->sz;i++)
    {
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", p1->date[i].name,
                                                            p1->date[i].age,
                                                            p1->date[i].sex,
                                                            p1->date[i].tele,
                                                            p1->date[i].addr);
    }
}
