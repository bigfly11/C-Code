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
    //���ļ�
      PeoInfo tem={0};
    while(fread(&tem,sizeof(PeoInfo),1,pf))
    {
        //����Ƿ���Ҫ����
        checkcapacity(p5);
        p5->date[p5->sz]=tem;
        p5->sz++;
    }
    //�ر��ļ�
    fclose(pf);
    pf==NULL;
}
//��̬�汾
//void InitContact(Contact*pc)
//{
//    pc->sz = 0;
//    //memset(Ŀ���ַ��Ҫ��ʼ�����ݣ���ʼ���ֽڸ���)
//    memset(pc->date, 0, sizeof(pc->date));
//}
//��̬�汾
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
    //�����ļ�
    LoadContact(pc);
}
//������Ϣ
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
    //�ر��ļ�
    fclose(pf);
    pf==NULL;
}
//�ͷŶ�̬�ڴ�
void DestoryContact(Contact*p4)
{
     free(p4->date);
     p4->date=NULL;
     p4->sz=0;
     p4->capacity=0;
}
//��̬�汾
//void Addcontact(Contact*p)
//{
//    if(p->sz==MAX)
//    {
//        printf("ͨѶ¼����");
//        return ;
//    }
//    printf("���������֣�");
//    scanf("%s",p->date[p->sz].name);//������ֱ�Ӿ�����Ԫ�ص�ַ�������ټ�&
//    printf("�������Ա�");
//    scanf("%s",p->date[p->sz].sex);
//    printf("���������䣺");
//    scanf("%d",&(p->date[p->sz].age));
//    printf("������绰��");
//    scanf("%s",p->date[p->sz].tele);
//    printf("�������ַ��");
//    scanf("%s",p->date[p->sz].addr);
//    p->sz++;
//    printf("¼��ɹ�\n");
//}
//��̬�汾
void checkcapacity(Contact*p)
{
    if(p->sz==p->capacity)
    {
        PeoInfo *ptr=(PeoInfo*) realloc(p->date,(p->capacity+INT_sz)*sizeof(PeoInfo));
        if(ptr!=NULL)
        {
            p->date=ptr;
            p->capacity=p->capacity+INT_sz;
            printf("���ݳɹ�");
        }
        else
        {
            perror("AddContact");
            printf("�����ϵ��ʧ��");
            return ;
        }
    }
}
void Addcontact(Contact*p)
{
    checkcapacity(p);
    //date����������Ԫ�ص�ַ
    printf("���������֣�");
    scanf("%s",p->date[p->sz].name);//������ֱ�Ӿ�����Ԫ�ص�ַ�������ټ�&
    printf("�������Ա�");
    scanf("%s",p->date[p->sz].sex);
    printf("���������䣺");
    scanf("%d",&(p->date[p->sz].age));
    printf("������绰��");
    scanf("%s",p->date[p->sz].tele);
    printf("�������ַ��");
    scanf("%s",p->date[p->sz].addr);
    p->sz++;
    printf("¼��ɹ�\n");
}
void PrintContact(const Contact*p1)
{
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
       printf("ͨѶ¼Ϊ��");
       return ;
   }
   printf("������Ҫɾ���˵�����");
   scanf("%s",&name[MAX_NAME]);
   //1.����Ҫɾ������
   //�л���û��
   int pos=Findby_num(p2,name);
   if(pos==-1)
   {
       printf("���˲�����");
       return ;
   }
   //2.ɾ��:���±�Ϊi+1��Ԫ�ظ���i
   //���������ƣ�ʹ����ı�
   int i;//sz-1��ֹ���ȷ��ʣ�-1���õ����һ��Ԫ��
   for(i=pos;i<p2->sz-1;i++)
   {
       p2->date[i]=p2->date[i+1];
   }
   p2->sz--;//Ԫ��ɾ������-1,Ҳ������ɾ�����һλ��Ա����
   printf("ɾ���ɹ�");
}
void SearchContact(Contact*p3)
{
    char name[MAX_NAME]={0};
    printf("������Ҫ�����˵�����");
    scanf("%s",&name);
    int pos=Findby_num(p3,name);
    if(pos==-1)
    {
        printf("���˲�����");
        return ;
    }
    else
    {
        printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
    printf("������Ҫ�޸��˵�����");
    scanf("%s",&name);
    int pos=Findby_num(p4,name);
    if(pos==-1)
    {
        printf("���˲�����");
        return ;
    }
    else
    {
        printf("���������֣�");
        scanf("%s",p4->date[pos].name);//������ֱ�Ӿ�����Ԫ�ص�ַ�������ټ�&
        printf("�������Ա�");
        scanf("%s",p4->date[pos].sex);
        printf("���������֣�");
        scanf("%d",&(p4->date[pos].age));
        printf("���������֣�");
        scanf("%s",p4->date[pos].tele);
        printf("���������֣�");
        scanf("%s",p4->date[pos].addr);
        printf("�޸ĳɹ�");
    }
}
