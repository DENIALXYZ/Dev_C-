#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>	
#include <unistd.h> 
#include <dos.h>
#include <iomanip>	

using namespace std;

int main(){
 
	int array_data[10]; 
	int pencarian; 
	int daniel, huta, zulu;
	int i, n;

	cout << "** ALGORITMA PENCARIAN DENGAN METODE BINARY SEARCH **\n" << endl;
	cout << "Masukan jumlah data yang akan di input : ";
		cin >> n;
	cout << "\n $ Masukan Data Array \n" << endl;
	
	for (i=0; i<n; i++){

		cout << "Input data array " << i << " ~> ";
		cin >> array_data[i];
	
	}

	cout << "\n $ Kelompok Data Array : " << endl;
		cout << endl;

    for(int a = 0; a < n; a++){
      
		cout << setw(4) << array_data[a]; 

	}
	cout << endl;
	cout << "\n $ Masukan data yang mao di cari : ";
		cin >> pencarian;
	
	daniel = 0;

	huta = n-1;

	zulu = (daniel + huta)/2;
	
	while (daniel <= huta){
		
		if(array_data[zulu] < pencarian){
			
			daniel = zulu + 1;

		}
		else if(array_data[zulu] == pencarian){

			cout << "\n ** Data " << pencarian << " ditemukan pada urutan ~ " << zulu + 1 << "\n";
			
			break;
		}
		else{

			 huta = zulu - 1;

		}
		zulu = (daniel + huta)/2;
	}

	if(daniel > huta){

		cout << "\n ** Data tidak ditemukan !!! " << "Data " << pencarian << " tersebut tidak ada dalam daftar." << endl;

	}
	getch();

const char rocket[] =

"        _ ^ _\n\
         /^\\\n\
         |-|\n\
         |D|\n\
         |A|\n\
         |N|\n\
         |I|\n\
         |E|\n\
         |L|\n\
        /|X|\\\n\
       / |Y| \\\n\
      |  |Z|  |\n\
       `-\"\"\"-`\n\
";
 
{
    for (int i = 0; i < 50; i++) 

		cout << endl; 
    	cout << rocket ;
    
	int j = 300000;
    
	for (int i = 0; i < 50; i++) {
        
		usleep(j); 
        
		j = (int)(j * 0.9); 
        
		cout << endl; 
    }
    
	cout << "Terimakasih telah menggunakan program ini! Best Regard's /danielxyz_ !!! " << endl;
    return 0;
	
	}
}
