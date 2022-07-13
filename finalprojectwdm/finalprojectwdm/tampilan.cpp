#include "tampilan.h"
using namespace std;

void  awal::delay()
{
	int anime = 1;
	while (anime < 1000000)
	{
		printf("");
		anime++;
	}

}
void awal::delay_pertama()
{
	int animasi = 1;
	while (animasi < 20000)
	{
		printf("");
		animasi++;
	}

}
void  awal::gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void  awal::delay_table()
{
	int deTab = 1;
	while (deTab < 400000)
	{
		printf("");
		deTab++;
	}
}
void awal::table()
{
	
	for (int i = 45; i <= 75; i++)
	{
		delay_table();
		gotoxy(i, 15);
		printf(".");
		gotoxy(i, 30);
		printf(".");
	}
	for (int i = 15; i <= 30; i++)
	{
		delay_table();
		gotoxy(45, i);
		printf(".");
		gotoxy(75, i);
		printf(".");
	}
}
void awal::page()
{
	;
	for (int i = 5; i <= 110; i++)
	{
		delay_pertama();
		gotoxy(i, 1);
		printf(".");
		delay_pertama();
		gotoxy(i, 3);
		printf(".");
		delay_pertama();
		gotoxy(i, 40);
		printf(".");
	}

	for (int i = 1; i <= 40; i++)
	{
		delay_pertama();
		gotoxy(5, i);
		printf(".");
		delay_pertama();
		gotoxy(110, i);
		printf(".");
	}
}
void awal::pagee()
{
	;
	for (int i = 5; i <= 50; i++)
	{
		
		gotoxy(i, 1);
		printf(".");
		
		gotoxy(i, 3);
		printf(".");
		
		gotoxy(i, 20);
		printf(".");


	}

	for (int i = 1; i <= 20; i++)
	{	
		gotoxy(5, i);
		printf(".");
		
		gotoxy(50, i);
		printf(".");
	}
	delay();
	gotoxy(10, 2);
	printf("P R O G R A M  W D M  T O S E R B A  ");
	delay();
	gotoxy(7, 5);
	printf("1. PROGRAM BARANG");
	delay();
	gotoxy(7, 6);	
	printf("2. PROGRAM KEUANGAN");
	delay();
	gotoxy(7, 7);
	printf("3. SHOW ALL INFO");
	delay();
	gotoxy(7, 8);
	printf("4. RESET DATA BASE [ ALL RESET ]");
	int  c;
	delay();
	gotoxy(7, 9);
	printf("5. END PROGRAM [ QUIT ]");
	cin >> c;
}