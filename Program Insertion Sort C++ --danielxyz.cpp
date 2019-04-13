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
	
		cout << "Name  : DANIEL HUTAJULU" << endl;
    	cout << "NIM   : 2018 - 0801 - 381 \n" << endl;

	cout << "##############################################" << endl;	
	cout << "#                                            #" << endl;
    cout << "# PROGRAM ALGORITMA INSERTION SORT DANIELXYZ #" << endl;
	cout << "#                                            #" << endl;
	cout << "##############################################\n" << endl;

		cout << " $ Masukan Nilai data yang akan di sorting \n";
		cout << "----------------------------------------------\n";

	int array[20];
	int h,u,t,a,zulu;
 
 		cout << " $ Masukan banyak bilangan : ";
 		cin >> a;
		cout << endl << "----------------------------------------------\n";
 
		for(h=0; h<a; h++){
	
  			cout << " Elemen data array ke - " << h << " : ";
  			cin >> array[h];
 
		}

	cout << endl << "----------------------------------------------\n";
 
	cout << "\n $ Data sebelum di sorting :";
 
	for(h=0; h<a; h++)
 
		cout << setw(4) << array[h];
		cout << endl;
		cout << "----------------------------------------------\n";

	cout << "\n * Proses Pengurutan data array : \n";

 	for(h=1; h<a; h++){
  
	zulu = array[h];
  
	u=h-1;
  
	while((zulu <= array [u]) && (u>=1)){

   		array[u+1] = array[u];
   		u--;
	}
  
		if (zulu >= array[u])
  			
			array [u+1] = zulu;
  		else{
	
   			array[u+1]=array[u];
   			array[u]= zulu;
		}
  
		cout << endl;

  	for(t=0; t<a; t++)
  
		cout << setw(4) << array[t];
 
	}

	cout << endl << "----------------------------------------------\n";
 	cout << "\n $ Data setelah di sorting :";
 	
	for(h=0; h<a; h++)
 
		cout << setw(4) << array[h];

		cout << endl;

		cout << endl << "----------------------------------------------\n";
 
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
