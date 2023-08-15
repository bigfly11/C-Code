//
// Created by 26948 on 2023/1/29.
//

#ifndef A2023_1_29TONGXUNLU_CONTACT_H
#define A2023_1_29TONGXUNLU_CONTACT_H

#endif //A2023_1_29TONGXUNLU_CONTACT_H
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

#include<string.h>
#include<stdio.h>
//类型定义
typedef struct PeoInfo //一个人的信息
{
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;
typedef struct contact//通讯录中每个人的信息
{
    PeoInfo date[MAX];//存放添加进来人的信息
    int sz;//记录当前通讯录中有效信息个数
}Contact;



//函数声明
//初始化通讯录
void InitContact(Contact *pc);
//增加联系人
void Addcontact(Contact*p);
//打印
void PrintContact(const Contact*p1);