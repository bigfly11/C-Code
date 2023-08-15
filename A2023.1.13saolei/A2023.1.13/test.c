#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("********1.    play**********\n");
	printf("********0.    exit**********\n");
	printf("****************************\n");

}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘

	DisplayBorad(show,ROW,COL);
	//布置雷
	Setmine(mine, ROW, COL);
	DisplayBorad(mine, ROW, COL);
	//排查雷
	Findmine(mine,show, ROW, COL);
	DisplayBorad(mine, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
