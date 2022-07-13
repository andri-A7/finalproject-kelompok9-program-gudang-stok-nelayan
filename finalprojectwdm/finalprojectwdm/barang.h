#pragma once
#ifndef barang_h
#define barang_h

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class EmpetyBarang
{
public:
	struct Barang
	{
		string code,nama;
		int harga;
		float jumlah;
	};
	Barang bar;
};

#endif // !D.barang_h