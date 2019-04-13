#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct mahasiswa {

	char nim[15];
	char nama[15];
	float nilai;

};

int main (){

	system("cls");
	mahasiswa mhs;
	
	cout << "Masukan NIM = ";

		cin >> mhs.nim;

	cout << "Masukan Nama = ";

		cin >> mhs.nama;
	
	cout << "Masukan Nilai Akhir = ";

		cin >> mhs.nilai;

	cout << endl << endl;

	cout << "NIM = " << mhs.nim << endl;
	cout << "Nama = " << mhs.nama << endl;
	cout << "Nilai Akhir = " << mhs.nilai << endl;

	getch();

}

