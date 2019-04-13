#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

	struct pengangguran {
		
		char name_nerd[50];
		int work_hours;
		int overtime;
		double basic_salary;
		double total_salary;

	} xyz;
 
int main () {

	cout << " *x*x*x*x* Program untuk Menghitung Gaji Harian seorang Pengangguran *x*x*x*x* " << endl;
	cout << endl;

	cout << "Masukkan Nama Pengangguran : ";
		std::cin >> xyz.name_nerd;
	//cout << endl;

	cout << "Input jumlah Jam Kerja sehari ditambah lembur : ";
		cin >> xyz.work_hours;
	//cout << endl;

	cout << "Input jumlah Jam Lembur : ";
		cin >> xyz.overtime;
	cout << endl;
	
	cout << " *x*x*x*x* Tampilkan Output Penghasilan Harian Pengangguran *x*x*x*x* " << endl;
	cout << endl;

	if (xyz.work_hours > 7) {

   		xyz.basic_salary = 7 * 50000;
   		xyz.overtime = (xyz.work_hours-7) * 50000;
        xyz.total_salary = (xyz.basic_salary + xyz.overtime);

	} 
	else {
   		xyz.overtime = 0;
   		xyz.total_salary = xyz.work_hours * 50000;
	}

		cout << "Nama Pengangguran : " << xyz.name_nerd << endl;
		cout << "Jumlah Gaji Pokok Per Hari : Rp. " << xyz.basic_salary << endl;
		cout << "Jam Kerja Pengangguran : " << xyz.work_hours << "\n";
		cout << "Biaya Overtime : Rp. " << xyz.overtime << endl;
		cout << "Total Gaji Harian Pengangguran : Rp. " << xyz.total_salary << endl;
		
	getch();
		
		
}
