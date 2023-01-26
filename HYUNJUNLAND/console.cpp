#include"console.h"


void CursorView()
{
	CONSOLE_CURSOR_INFO curinfo;
	curinfo.bVisible = false;
	curinfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}



void gotoxy(int x, int y) {
	HANDLE hout;
	COORD Cur;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);

	Cur.X = x;
	Cur.Y = y;

	SetConsoleCursorPosition(hout, Cur);
}

void Screen()
{
	system("mode con cols=110 lines=50");
}

void remove_scrollbar()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
}
