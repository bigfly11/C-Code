//
// Created by 26948 on 2023/1/30.
//

#ifndef A2023_1_30TONGXUNLU_CONTACT_H
#define A2023_1_30TONGXUNLU_CONTACT_H

#endif //A2023_1_30TONGXUNLU_CONTACT_H
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#define Default_sz 3
#define INT_sz 2

#include<string.h>
#include<stdio.h>
#include <malloc.h>

//类型定义
typedef struct PeoInfo //一个人的信息
{
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;
//静态版本
//typedef struct contact//通讯录中每个人的信息
//{
//    PeoInfo date[MAX];//存放添加进来人的信息
//    int sz;//记录当前通讯录中有效信息个数
//}Contact;
//动态版本
typedef struct contact//通讯录中每个人的信息
{
    PeoInfo *date;//存放人信息空间的地址
    int sz;//记录当前通讯录中有效信息个数
    int capacity;//通讯录容量
}Contact;



//函数声明
//初始化通讯录
void InitContact(Contact *pc);
//增加联系人
void Addcontact(Contact*p);
//检查容量
void checkcapacity(Contact*p);
//打印
void PrintContact(const Contact*p1);
//删除
void DelContact(Contact*p2);
//查找
void SearchContact(Contact*p3);
//修改
void modifycontact(Contact*p4);
//释放动态空间
void DestoryContact(Contact*p4);
//把文件保存到本地
void SaveContact(Contact*p4);
//加载内容到通讯录
void LoadContact(Contact*p5);