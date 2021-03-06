// Tetris.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gwFun.h"

void printBox(int, int, int, int);

int main(void)
{
	int TetrisNumber, depth, yPoint, BoxWidth;
	srand((unsigned)time(NULL));
	TetrisNumber = rand() % 7 + 1;
	//clrscr();	//此处有未知错误！！！
	system("cls");

	depth = 15;
	BoxWidth = 40;
	for (yPoint = 0; yPoint <= depth - 3; yPoint++)
	{
		printBox(TetrisNumber, depth, yPoint, BoxWidth);
		Sleep(500);
	}

	printf("\n\n\n");
	//getchar();

	return 0;
}

void printBox(int TetrisNumber, int depth, int yPoint, int BoxWidth)
{
	gotoxy(10, 1);
	printf("|");
	for (int i = 1; i <= BoxWidth - 1; i++)
		printf("-");
	printf("|");
	for (int i = 2; i <= depth; i++)
	{
		gotoxy(10, i);
		printf("|");
		for (int j = 1; j <= BoxWidth - 1; j++)
			printf(" ");
		printf("|");
	}
	gotoxy(10, depth + 1);
	printf("|");
	for (int i = 1; i <= BoxWidth - 1; i++)
		printf("-");
	printf("|");
	switch (TetrisNumber)
	{
	case 1:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", "@@");
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@");
	}	break;
	case 2:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", "  @");
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@@");
	}	break;
	case 3:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", "@@");
		gotoxy(30, 3 + yPoint);
		printf("%s", " @@");
	}	break;
	case 4:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", " @@");
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@");
	}	break;
	case 5:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", "@  ");
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@@");
	}	break;
	case 6:
	{
		gotoxy(30, 2 + yPoint);
		printf("%s", " @ ");
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@@");
	}	break;
	case 7:
	{
		gotoxy(30, 3 + yPoint);
		printf("%s", "@@@@");
	}	break;
	default:
		break;
	}
}