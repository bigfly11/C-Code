//
// Created by 26948 on 2023/1/28.
//
#include"contact.h"
void menu()
{
    printf("*******************************\n");
    printf("****** 1.add      2. del ******\n");
    printf("****** 3.search   4.modify*****\n");
    printf("****** 5.sort     6.print *****\n");
    printf("****** 0.exit            ******\n");
    printf("*******************************\n");
}
enum option
{
    exit,add,del,search,modify,sort,print
};
int main()
{
    int input =0;
    //����ͨѶ¼
    Contact con;//ͨѶ¼
    InitContact(&con);

    do {
        menu();
        scanf("%d",&input);
        switch(input)
        {
            case add:
                Addcontact(&con);
               break;
            case del:
                break;
            case search:
                break;
            case modify:
                break;
            case sort:
                break;
            case print:
                PrintContact(&con);
                break;
            case exit:
                break;
            default:
                printf("����ѡ�����ѡ��\n");
        }
    }while(input);
    return 0;
}
