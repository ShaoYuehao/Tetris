#pragma once

#include <windows.h>

extern void gotoxy(int, int);
extern void clrscr();

// ���Θ��Ƅӵ�ָ����λ��
void gotoxy(int xpos, int ypos)
{
	COORD scrn;

	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

	scrn.X = xpos; scrn.Y = ypos;

	SetConsoleCursorPosition(hOuput, scrn);
}

// �����Ļ
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO sbinf;
	int size;
	COORD scrn = { 0, 0 };
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &sbinf);
	size = (sbinf.srWindow.Right - sbinf.srWindow.Left + 1) * (sbinf.srWindow.Bottom - sbinf.srWindow.Top + 1);
	FillConsoleOutputCharacter(hStdOut, 32, size, scrn, NULL);
}
