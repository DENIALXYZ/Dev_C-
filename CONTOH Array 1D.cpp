#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	int j[10]={0,1,2,3,4,5,6,7,8,9}; // array fungsi integer 10 digit

		cout<<"Masukan data struktur array : "<<"\n"; // syntax untuk menginput struktur data array
		cout<<endl;	// memberikan space line pada output

	for(int i=0;i<10;i++){ // looping , pengulangan rekursif
		
		// cout<<j[i]; // <<"\n"; ----> fungsi vertikal bisa menggunakan endl di line bawah
		cin>>j[i]; // cin>> untuk input data array, 10 digit
		cout<<endl; // endl, untuk membuat output menjadi ke bawah
		// cin = read, cout = print
	}
	
	return 0;

}
