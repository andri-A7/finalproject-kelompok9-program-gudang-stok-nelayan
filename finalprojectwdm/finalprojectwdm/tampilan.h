#pragma once

#ifndef tampilan_H
#define tampilan_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


class awal
{
public:
	void gotoxy(int x, int y);
	void delay();
	void delay_pertama();
	void tampilan()
	{
		int pa = 20;
		int d = 26;

		page();
	    table();
		delay_pertama();
		gotoxy(50, pa);
		printf("s");
		delay();
		gotoxy(51, pa);
		printf("e");

		delay();
		gotoxy(52, pa);
		printf("l");
		delay();
		gotoxy(53, pa);
		printf("a");

		delay();
		gotoxy(54, pa);
		printf("m");
		delay();
		gotoxy(55, pa);
		printf("a");

		delay();
		gotoxy(56, pa);
		printf("t");
		delay();
		gotoxy(57, pa);
		printf(" ");
		delay();

		gotoxy(58, pa);
		printf("d");
		delay();
		gotoxy(59, pa);
		printf("a");

		delay();
		gotoxy(60, pa);
		printf("t");
		delay();
		gotoxy(61, pa);
		printf("a");

		delay();
		gotoxy(62, pa);
		printf("n");

		delay();
		gotoxy(63, pa);
		printf("g");

		delay();
		gotoxy(64, pa);
		printf(" ");
		delay();
		gotoxy(65, pa);
		printf("d");
		delay();

		gotoxy(66, pa);
		printf("i");
		delay();
		gotoxy(67, pa);
		printf(" ");

		delay();
		gotoxy(68, pa);
		printf("W");
		delay();
		gotoxy(69, pa);
		printf("D");

		delay();
		gotoxy(70, pa);
		printf("M");

		delay();
		gotoxy(71, pa);
		printf(".");

		delay();
		gotoxy(72, pa);
		printf(".");


		int f = 26;
		delay_pertama();
		gotoxy(50, f);
		printf("@");

		delay_pertama();
		gotoxy(51, f);
		printf("");

		delay_pertama();
		gotoxy(52, f);
		printf("C");

		delay_pertama();
		gotoxy(53, f);
		printf("o");

		delay_pertama();
		gotoxy(54, f);
		printf("p");

		delay_pertama();
		gotoxy(55, f);
		printf("y");

		delay_pertama();
		gotoxy(56, f);
		printf("r");

		delay_pertama();
		gotoxy(57, f);
		printf("i");

		delay_pertama();
		gotoxy(58, f);
		printf("g");

		delay_pertama();
		gotoxy(59, f);
		printf("h");

		delay_pertama();
		gotoxy(60, f);
		printf("t");
		for (int s = 62; s <= 62; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("k");
		}

		for (int s = 63; s <= 63; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("l");
		}

		for (int s = 64; s <= 64; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("m");
		}

		for (int s = 65; s <= 65; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("p");
		}

		for (int s = 66; s <= 66; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();;
			gotoxy(s, d);
			printf("k");
		}

		for (int s = 67; s <= 67; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("_");
		}

		for (int s = 68; s <= 68; s++)
		{

			delay_table();
			gotoxy(s, d);
			printf("@");

			delay_table();
			gotoxy(s, d);
			printf("");

			delay_table();
			gotoxy(s, d);
			printf("C");

			delay_table();
			gotoxy(s, d);
			printf("o");

			delay_table();
			gotoxy(s, d);
			printf("p");

			delay_table();
			gotoxy(s, d);
			printf("y");

			delay_table();
			gotoxy(s, d);
			printf("r");

			delay_table();
			gotoxy(s, d);
			printf("i");

			delay_table();
			gotoxy(s, d);
			printf("g");

			delay_table();
			gotoxy(s, d);
			printf("h");

			delay_table();
			gotoxy(s, d);
			printf("t");

			delay_table();
			gotoxy(s, d);
			printf("8");
		}
	}

	void table();
	void delay_table();
	void page();
	void pagee();
	
};
#endif // !1


