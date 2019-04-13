#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>	
#include <stdio.h>

using namespace std;

struct mhs {

	char NIM[12];
	char Nama[50];
	char Alamat[100];
	char Tempat[12];
	char Tanggal_Lahir[12];

} x;

struct almt {

	char Nama_Jalan[50];
	char Nomor_Rumah[5];
	char Kota[10];
	char Provinsi[15];

} y;

struct tgl {

	int d, m, y;

} z;

int main (){

cout << " *+*x*+*x*+* Input Data Mahasiswa Esgul *+*x*+*x*+* \n\n" << endl;

	int dh;

	for (int k = 0; k < 5; k++) {

		printf("No. %i \n", k+1);
		cout << endl;

		printf("NIM | Nomor Induk Mahasiswa = "); scanf("%s",x.NIM);	
 		printf("Nama Mahasiswa Esgul = "); scanf("%s",x.Nama);
		cout << endl;
 		printf("Alamat Rumah = "); scanf("%s",x.Alamat);
		printf("Nama Jalan = "); scanf("%s",y.Nama_Jalan);
		printf("Nomor Rumah = "); scanf("%s",y.Nomor_Rumah);
		printf("Kota = "); scanf("%s",y.Kota);
		printf("Provinsi = "); scanf("%s",y.Provinsi);
		cout << endl;
		printf("Tempat = "); scanf("%s",x.Tempat);
		printf("Tanggal Lahir = "); scanf("%s",x.Tanggal_Lahir);
 		cout << endl; 
	}
cout << endl;
cout << " *+*x*+*x*+* Tampilkan Output Data 5 Mahasiswa Esgul *+*x*+*x*+* \n\n" << endl;
 

	for(int k = 0; k < 5; k++) {
		cout << endl;
		printf("No. %i \n", k+1);
		cout << endl;	
		cout << "NIM = " << x.NIM << endl;
		cout << "Nama Mahasiswa = " << x.Nama << endl;
		cout << "Alamat = " << x.Alamat << endl;
		cout << "Nama Jalan = " << y.Nama_Jalan << endl;	
		cout << "Nomor Rumah = " << y.Nomor_Rumah << endl;
		cout << "Kota = " << y.Kota << endl;
		cout << "Provinsi = " << y.Provinsi << endl;
		cout << "Tempat Kelahiran = " << x.Tempat << endl;
		cout << "Tanggal Lahir = " << x.Tanggal_Lahir << endl;
		cout << endl;
	}
}

