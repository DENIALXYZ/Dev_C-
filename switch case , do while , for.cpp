// case di kerjakan jika dipilih, jika sudah ketemu tdk mengerjakan case yg lain

// switch case , seperti program memilih menu; 

// **Pengunlangan

// for , untuk ini ini ini

// do. do while pengkondisian di akhir, setelah scanning seluruh data

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>	

using namespace std;

int main (){

	char grade;
	
	cout << " *~*~*~*~**~* Masukan Grade atau Nilai Anda *~*~*~*~**~* " << endl;
	cout << "Input nilai anda : "; cin >> grade; 

	cout << "_ _ _ _ _ _ _ _ _ _ _" << endl; 
	

	//char grade = 'D';

	switch  (toupper(grade)){ // to Upper. convert tipe elemen huruf besar menjadi kecil, to Lower. convert huruf kecil menjadi besar
		
		case 'A':
		// case 'a': // ---------->> fungsi double case, untuk membuat persamaan if else, or and nor xor || && ==

			cout << "Excellent" << endl;
			break;

		case 'B':
		// case 'b':
		
		case 'C':
		// case 'c':	
			cout << "Well done" << endl;
			break;
		
		case 'D':
		// case 'd':	
			cout << "You Passed" << endl;
			break;

		case 'E':
		// case 'e':	
			cout << "Good Luck yo :)" << endl;
			break;
		
		case 'F':
		// case 'f':	
			cout << "Better try again" << endl;
			break;
		
		default :
			
			cout << "Invalid grade " << grade << endl;
	}
		
	cout << "Your grade is " << grade << endl;

	cout << "" << endl;

	return 0;
	
}

