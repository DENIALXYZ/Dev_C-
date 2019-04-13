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
 
int main() {

    int bilangan, pilih;
    
    cout << "######################################################" << endl;
	cout << "# PROGRAM INPUT ANGKA GANJIL GENAP OUTPUT BERLAWANAN #\n";
	cout << "#                                                    #" << endl;
    cout << "# 1. Masukan Angka Genap                             #" << endl;
    cout << "# 2. Masukan Angka Ganjil                            #\n";
	cout << "#                                                    #" << endl;
    cout << "######################################################\n" << endl;
  	
	cout << endl << "Silahkan Input Opsi yang tersedia (1/2): "; 
	cin >> pilih;
  	
	cout << endl;

  	switch(pilih) {
       case 1 :
           cout << "Masukan Bilangan: ";
  		   cin >> bilangan; 
		   cout << endl;
           
		  	break;
       case 2 :
           cout << "Masukan Bilangan: ";
  	       cin >> bilangan; cout << endl;
           
			break;
       
		default :
        
		   cout << "[undefined opsi] ";  
    }
  	
    switch(bilangan%2) {
       case 0 :
           cout << "Angka yang dimasukan Ganjil\n";
       
		    break;
       case 1 :
           cout << "Angka yang dimasukan Genap\n";
        
		    break;
       
		default :
           cout << "[undefined] \n";  
    }
    
	cout << "\n $ Note : Hasil output sengaja terbalik! \n";
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
