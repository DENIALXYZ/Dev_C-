#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>	

const int sj = 5000;
const int sh = 30000;

using namespace std;

int main () {

	int ij,ih,pps,total2;
	int c=1;
	float total, totalhr, totalhr2;
	char nama[30];

	cout << "*******************" << endl;
	cout << "List Harga Sewa PS" << endl;
	int arr[2] = {5000,30000};
	
	for (int i = 0; i < 2; i++){
	
	cout << "RP. " << arr[i] << endl;

	};

	total = 0;
	totalhr = 0;
	total2;
	totalhr2;
	
	cout << "*******************" << endl;
	cout << "1. Sewa Playstation /jam" << endl;
	cout << "2. Sewa Playstation /hari" << endl;

	cout << "*******************" << endl;
	cout << "Masukan Nama Customer = ";
		cin >> nama;
	cout << "Pilihan Sewa Playstation = ";
		cin >> pps;

	if (pps==1) {

		cout << "Jika Anda menyewa lebih dari 5 jam, maka Anda akan mendapatkan Diskon 10%" << endl;
		cout << "Masukan Berapa Jam bermain = ";
			cin >> ij;

		if (ij>=5){

		total = (ij * sj) * 0.1;
		total2 = ij * sj - total;
		cout << "Anda Mendapatkan Diskon sebesar 10%" << endl;
		cout << "Total Bayar = Rp. " << total2 << endl;

		}
		else if (ij < 5) {
		
			total = ij * sj;
			cout << "Jika Anda Menyewa kurang dari 5 jam tidak mendapatkan Diskon" << endl;
			cout << "Anda tidak mendapatkan Diskon, Silahkan bermain lagi!! :)" << endl;
			cout << "Total Bayar = Rp. " << total << endl;
 
		}

	}

	 	if (pps==2){
			
			cout << "Jika Anda menyewa kurang dari 3 hari tidak mendapatkan Diskon" << endl;	
			cout << "Masukan Berapa Hari Anda Sewa Playstation = ";
				cin >> ih;
		
		if (ih < 3){
		
			totalhr = ih * sh;
			totalhr2 = ij * sh - total;
			cout << "Anda tidak mendapatkan Diskon" << endl;
			cout << "Total Bayar Sewa Playstation = Rp. " << totalhr << endl;
	
		} 
		else if (ij > 3){

			totalhr = (ih * sh) * 0.1;
			totalhr2 = ih * sh - total;
			cout << "Anda Mendapatkan Diskon 10%" << endl;
			cout << "Total Bayar = Rp. " << totalhr2 << endl;

			}
		}	
	
		do {

			cout << "*x*~*x*~*x* Terimakasih telah berkunjung di RENTAL Playstation DANIELXYZ *x*~*x*~*x*" << endl;
			
			c++; 
		} while (c <= 7);

	return 0;

}
