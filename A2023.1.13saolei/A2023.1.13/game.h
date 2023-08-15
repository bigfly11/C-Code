#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//函数声明
void InitBoard(char mine[ROWS][COLS], int rows, int cols,char set);
void InitBoard(char show[ROWS][COLS], int rows, int cols,char set);
//打印
DisplayBorad(char mine[ROWS][COLS], int row, int col);
DisplayBorad(char show[ROWS][COLS], int row, int col);
//布置雷
void Setmine(char mine[ROWS][COLS], int row, int col);
//排查雷
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row,int col);
