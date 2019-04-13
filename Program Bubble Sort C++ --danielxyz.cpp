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

	int d,a,n,i,e,lxyz[10];

	cout << "Name  : DANIEL HUTAJULU" << endl;
    cout << "NIM   : 2018 - 0801 - 381 \n" << endl;

	cout << "###########################################" << endl;	
	cout << "#                                         #" << endl;
    cout << "# PROGRAM ALGORITMA BUBBLE SORT DANIELXYZ #" << endl;
	cout << "#                                         #" << endl;
	cout << "###########################################" << endl;

    cout << "\n $ Mengurutkan Nilai data dari urutan terbesar ke terkecil, masukan jumlah data? ";

 	cin >> a;
 	cout << endl;	

    for(d=0; d<a; d++){

        cout << " Input data nilai ke- " << d+1 << " : ";
		cin >> lxyz[d];
    
	}
    
		cout << "\n $ Data sebelum diurutkan : \n" << endl;
   		
		for(d=0; d<a; d++){

		cout << setw(4) << lxyz[d];
   		
		}
   
		cout << endl;

	for(d=0; d<a-1; d++){

        for(i=d+1; i<a; i++){
        
		n=d;
            
			if(lxyz[n] < lxyz[i]){
                
			n=i;
        
			}
        
		e=lxyz[n];
        lxyz[n]=lxyz[d];
        lxyz[d]=e;
        
		}

    }
    
	cout << "\n $ Hasil output program dengan Metode Bubble Sort : \n";

	cout << endl;
    
	for(d=0; d<a; d++){
        
		cout << setw(4) << lxyz[d];
    }

	cout << endl;
	system ("color 0A");

	char *setring = "\n>> Terimakasih sudah mencoba running program ini, Selamat Malam Dunia..!!! <<\n";
    
	for(int i=0; i<strlen(setring); i++){
    
	    printf("%c",*(setring + i));
    
	    Sleep(200);
    
	}
    
	putchar('\n');
    system("pause");
    
	return 0;

	getch();
	

}
