#include <iostream>

using namespace std;

void pilihan (int x){
	
	if (x==1) {
	
		cout<< "Anda pesan Nasi Goreng";

	}
	else {

		cout << "Anda pesan Mie Kwetiaw";
	
	}

}

int main (){

	int pilih;

	cout << "1. Nasi Goreng" << '\n';
	cout << "2. Mie Kwetiaw" << '\n';
	cout << "Masukkan pilihan Anda (1-2): ";
	cin >> pilih;

	pilihan (pilih);

}
