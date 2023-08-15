//
// Created by 26948 on 2023/1/30.
//
#include"contact.h"
void LoadContact(Contact*p5)
{
    FILE*pf=fopen("contact.txt","r");
    if(pf==NULL)
    {
        perror("fopen");
        return ;
    }
    //读文件
      PeoInfo tem={0};
    while(fread(&tem,sizeof(PeoInfo),1,pf))
    {
        //检查是否需要增容
        checkcapacity(p5);
        p5->date[p5->sz]=tem;
        p5->sz++;
    }
    //关闭文件
    fclose(pf);
    pf==NULL;
}
//静态版本
//void InitContact(Contact*pc)
//{
//    pc->sz = 0;
//    //memset(目标地址，要初始化内容，初始化字节个数)
//    memset(pc->date, 0, sizeof(pc->date));
//}
//动态版本
void InitContact(Contact*pc)
{
    pc->date=(PeoInfo*)malloc(Default_sz*sizeof(PeoInfo));
    if(pc->date==NULL)
    {
         perror("InitContact");
         return ;
    }
    pc->sz=0;
    pc->capacity=Default_sz;
    //加载文件
    LoadContact(pc);
}
//保存信息
void SaveContact(Contact*p4)
{
    FILE*pf=fopen("contact.txt","w");
    if(pf==NULL)
    {
        perror("fopen");
        return ;
    }
    int i=0;
    for(i=0;i<p4->sz;i++)
    {
        fwrite(p4->date+i,sizeof(PeoInfo),1,pf);
    }
    //关闭文件
    fclose(pf);
    pf==NULL;
}
//释放动态内存
void DestoryContact(Contact*p4)
{
     free(p4->date);
     p4->date=NULL;
     p4->sz=0;
     p4->capacity=0;
}
//静态版本
//void Addcontact(Contact*p)
//{
//    if(p->sz==MAX)
//    {
//        printf("通讯录已满");
//        return ;
//    }
//    printf("请输入名字：");
//    scanf("%s",p->date[p->sz].name);//数组名直接就是首元素地址，不用再加&
//    printf("请输入性别：");
//    scanf("%s",p->date[p->sz].sex);
//    printf("请输入年龄：");
//    scanf("%d",&(p->date[p->sz].age));
//    printf("请输入电话：");
//    scanf("%s",p->date[p->sz].tele);
//    printf("请输入地址：");
//    scanf("%s",p->date[p->sz].addr);
//    p->sz++;
//    printf("录入成功\n");
//}
//动态版本
void checkcapacity(Contact*p)
{
    if(p->sz==p->capacity)
    {
        PeoInfo *ptr=(PeoInfo*) realloc(p->date,(p->capacity+INT_sz)*sizeof(PeoInfo));
        if(ptr!=NULL)
        {
            p->date=ptr;
            p->capacity=p->capacity+INT_sz;
            printf("增容成功");
        }
        else
        {
            perror("AddContact");
            printf("添加联系人失败");
            return ;
        }
    }
}
void Addcontact(Contact*p)
{
    checkcapacity(p);
    //date就是数组首元素地址
    printf("请输入名字：");
    scanf("%s",p->date[p->sz].name);//数组名直接就是首元素地址，不用再加&
    printf("请输入性别：");
    scanf("%s",p->date[p->sz].sex);
    printf("请输入年龄：");
    scanf("%d",&(p->date[p->sz].age));
    printf("请输入电话：");
    scanf("%s",p->date[p->sz].tele);
    printf("请输入地址：");
    scanf("%s",p->date[p->sz].addr);
    p->sz++;
    printf("录入成功\n");
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
static int Findby_num(Contact*p2,char name[MAX_NAME])
{
    int i=0;
    for(i=0;i<p2->sz;i++)
    {
        if(strcmp(p2->date[i].name,name)==0)
        {
            return i;
        }
    }
    return -1;

}
void DelContact(Contact*p2)
{
    char name[MAX_NAME]={0};
   if(p2->sz==0)
   {
       printf("通讯录为空");
       return ;
   }
   printf("请输入要删除人的名字");
   scanf("%s",&name[MAX_NAME]);
   //1.查找要删除的人
   //有或者没有
   int pos=Findby_num(p2,name);
   if(pos==-1)
   {
       printf("此人不存在");
       return ;
   }
   //2.删除:把下标为i+1的元素赋给i
   //依次往后移，使数组改变
   int i;//sz-1防止过度访问，-1整好到最后一个元素
   for(i=pos;i<p2->sz-1;i++)
   {
       p2->date[i]=p2->date[i+1];
   }
   p2->sz--;//元素删除个数-1,也可以起到删除最后一位成员作用
   printf("删除成功");
}
void SearchContact(Contact*p3)
{
    char name[MAX_NAME]={0};
    printf("请输入要查找人的名字");
    scanf("%s",&name);
    int pos=Findby_num(p3,name);
    if(pos==-1)
    {
        printf("此人不存在");
        return ;
    }
    else
    {
        printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","地址");
        int i=0;
        for(i=0;i<p3->sz;i++)
        {
            printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", p3->date[i].name,
                   p3->date[pos].age,
                   p3->date[pos].sex,
                   p3->date[pos].tele,
                   p3->date[pos].addr);
        }
    }
}
void modifycontact(Contact*p4)
{
    char name[MAX_NAME]={0};
    printf("请输入要修改人的名字");
    scanf("%s",&name);
    int pos=Findby_num(p4,name);
    if(pos==-1)
    {
        printf("此人不存在");
        return ;
    }
    else
    {
        printf("请输入名字：");
        scanf("%s",p4->date[pos].name);//数组名直接就是首元素地址，不用再加&
        printf("请输入性别：");
        scanf("%s",p4->date[pos].sex);
        printf("请输入名字：");
        scanf("%d",&(p4->date[pos].age));
        printf("请输入名字：");
        scanf("%s",p4->date[pos].tele);
        printf("请输入名字：");
        scanf("%s",p4->date[pos].addr);
        printf("修改成功");
    }
}
