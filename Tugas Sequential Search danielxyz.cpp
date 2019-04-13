#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>	
#include <unistd.h>

using namespace std;

int main(){

	int array_data[12];
    int sequential_data; 
	int xyz; 
	int data;

      	cout << "** ALGORITMA PENCARIAN DENGAN METODE SEQUENTIAL SEARCH **" << endl;

	for(xyz = 0; xyz <= 12; xyz++){ 

        cout << "\n Masukkan nilai indeks ke - " << xyz << " = ";
		cin >> array_data[xyz];
    }
      	cout << "\nData Array : " << endl;
		cout << endl;

    for(int a = 0; a <= 12; a++)
      
		cout << setw(4) << array_data[a]; /* Fungsi 'setw()', Mengatur lebar bidang yang akan digunakan pada operasi keluaran.

		Berperilaku seolah-olah lebar anggota dipanggil dengan n sebagai argumen pada aliran yang disisipkan / diekstraksi sebagai manipulator 

		(dapat dimasukkan / diekstraksi pada aliran input atau aliran keluaran). Manipulator ini dideklarasikan di header <iomanip>. */
 
		cout << endl;

      	cout << "\n Silahkan input data yang ingin dicari ~> ";
      	cin >> sequential_data;
      
	for(xyz = 0; xyz <= 12; xyz++){

      	if(array_data[xyz]==sequential_data){
                  
			data = 1;
            break;
        }
    }
		
		if(data==1)
        
		    cout << "\n Data yang dicari berada pada urutan ke ~> " << xyz << endl;
      
		else
        
		    cout << "\n [UNKNOWN ERROR] Data belum terdefinisikan!! " << endl;
     
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
    
	cout << "Credit's by danielxyz_ !!! " << endl;
    return 0;
	
	}
}
