//
// Created by 26948 on 2023/1/30.
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
    EXIT,add,del,search,modify,sort,print
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
                DelContact(&con);
                break;
            case search:
                SearchContact(&con);
                break;
            case modify:
                modifycontact(&con);
                break;
            case sort:
                break;
            case print:
                PrintContact(&con);
                break;
            case EXIT:
                //������Ϣ
                SaveContact(&con);
                //�ͷ��ڴ�
                DestoryContact(&con);
                break;
            default:
                printf("����ѡ�����ѡ��\n");
        }
    }while(input);
    return 0;
}
