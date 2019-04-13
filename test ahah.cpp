#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>	

using namespace std;

struct mhs {

	std::string NIM;
	std::string Nama[30];
	std::string Alamat;
	std::string Tempat;
	std::string Tanggal_Lahir;

} x[5];

struct almt {

	char Nama_Jalan;
	double Nomor_Rumah;
	char Kota;
	char Provinsi;

} y[5];

struct tgl {

	int d, m, y;

} z[5];

int main (){

cout << " *+*x*+*x*+* Input Data Mahasiswa Esgul *+*x*+*x*+* \n\n" << endl;

	int denialhtzl;

	for (int dh = 0; dh < 5; dh++) {

		// printf("NIM : "); scanf("%s",&denialhtzl[x].NIM);
 		printf("No. %i \n", dh+1);
		cout << endl;

		printf("NIM | Nomor Induk Mahasiswa = "); scanf("%s",&denialhtzl[x].NIM);	
 		printf("Nama Mahasiswa Esgul = "); scanf("%s",&denialhtzl[x].Nama);
		cout << endl;
 		printf("Alamat Rumah "); scanf("%s",&denialhtzl[x].Alamat);
		cout << endl;

		printf("Nama Jalan = "); scanf("%s",&denialhtzl[y].Nama_Jalan);
		printf("Nomor Rumah = "); scanf("%s",&denialhtzl[y].Nomor_Rumah);

		printf("Kota = "); scanf("%s",&denialhtzl[y].Kota);
		printf("Provinsi = "); scanf("%s",&denialhtzl[y].Provinsi);
		cout << endl;

		printf("Tempat = "); scanf("%s",&denialhtzl[x].Tempat);
		printf("Tanggal Lahir = "); scanf("%s",&denialhtzl[z].d,&denialhtzl[z].m,&denialhtzl[z].y);
 		cout << endl;
	}

cout << " *+*x*+*x*+* Tampilan Output Data 5 Mahasiswa Esgul *+*x*+*x*+* \n\n" << endl;
 

	for(int dh = 0; dh < 5; dh++) {

 	printf("", dh+1, 

		denialhtzl[x].NIM,
			
			denialhtzl[x].Nama,
					
				denialhtzl[x].Alamat,
					
					denialhtzl[y].Nama_Jalan,
					
						denialhtzl[y].Nomor_Rumah,
					
							denialhtzl[y].Kota,
					
								denialhtzl[y].Provinsi,
		denialhtzl[x].Tempat,
					
			denialhtzl[z].d,
					
				denialhtzl[z].m,
					
					denialhtzl[z].y);

 	}

}

