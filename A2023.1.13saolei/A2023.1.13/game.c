#include"game.h"
void InitBoard(char borad[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0; int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			borad[i][j] = set;
		}
	}

}
DisplayBorad(char borad[ROW][COL], int row, int col)
{
	printf("----------扫雷游戏----------\n");
	int i = 1; int j = 0;
	//打印列号
	for (i =0 ; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ",borad[i][j]);
			
		}
		printf("\n");//打印出方形效果
	}
	
}
void Setmine(char mine[ROW][COL], int row, int col)
{
	//布置十个雷
	int count = 10;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
 static int  get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0; int j = 0; int count = 0;
	for (i = y - 1; i <= y + 1; i++)
	{
		for (j = x - 1; j <= x + 1; j++)
		{     
			if (mine[i][j] == '1')
				count++;
		}

	}
    return count;
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0; int y = 0;
	while (1) {
		printf("请输入排查雷的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == "1")
			{
				printf("很遗憾，你被炸死了");
				DisplayBorad(mine, ROW, COL);
				break;
			}
			else
			{
				//统计周围雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBorad(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标不合法");
		}
	}

}
