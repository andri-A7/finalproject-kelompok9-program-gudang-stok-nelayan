/*
	//project akhir Semester 2
	//APLIKASI MANAGAMEN TOSERBA

	       APLIKASI MANAGEMEN TOSERBA

	1. PROGRAM BARANG 	|CREATE BARANG			|
						|FIND BARANG			|  "BARANG.xml"
						|DELETE BARANG			|

	2. PROGRAM KEUANGAN |HITUNG PEMASUKAN 		|
						|HITUNG PENGELUARAN		|  "KEUANGAN.txt"
						|HITUNG GAJI KARYAWAN	|

	3. SHOW ALL INFO    | OUT : |MELIHAT BARANG |
						        |PEMASUKAN		|  "BARANG.xml + KEUANGAN.txt "
						        |PENGELUARAN	|
								|GAJI KARYAWAN 	|
	4. RESET DATA BASE [ ALL RESET ]

	5. END PROGRAM [ QUIT ]

NAMA KELOMPOK;
*
*	@Andri Pebriyanto         |
*	@Hizkil Maulana arjodi	  |
*	@Anggita Dika Tamtama	  | Kelompok 8
*	@Rian Antono 			  |
*   @Dimas Aryo Wibowo		  |
*	@Rio Armada 			  |
*	@Alif Ikhwan Habibi		  |
*	
* 
*/

#include <iostream>
#include "./tampilan.h"
#include <conio.h>
using namespace std;
int main()
{
	system("pause");
	awal home;	
	home.tampilan();
	home.delay();
	system("cls");
	home.pagee();

}
