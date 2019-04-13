#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

main() {

	int i [4] = {5,4,8,2};	// ------------------->>> setiap array dimulai dari index 0;
	int temp; // variabel kosong, variabel sementara
	int cari;
	int carilg;

	for (int a=0; a<=3; a++){
		
		cout << "" << i[a];
	
		}
		cout << endl;

	for (int a=0; a<=3; a++){

		for (int b=a+1; b<=3; b++){ // ---->> sorting

			if (i[a] > i[b]){

				temp = i[a]; // --------->> perpindahan data
				i[a] = i[b];
				i[b] = temp;
				
				}

			}


		}
		cout << "" << endl;
		for (int a=0; a<=3; a++){
			
			cout << " " << i[a];	

			}

		cout << "\n\n (Linear Search) Masukan Angka yang di cari "; // -------------->> linear search , pencarian // data minimal sepuluh
		cin >> cari;

		for (int x=0; x<=3; x++){		// ----->> ngeprint data array harus/wajib ada for 
			
			if (i[x]==cari){ // ----->> semua data yang mau di search , harus berurut, dari kiri ke kanan

				cout << "Nilai ada di Angka ke ";
				cout << x+1;
				break; // --------->> break, untuk menghentikan pengulangan/kondisional

			}

		}


}
