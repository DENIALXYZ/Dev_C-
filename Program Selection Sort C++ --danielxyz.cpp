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

	int x[10],w,h,y,z;
	
		cout << "Name  : DANIEL HUTAJULU" << endl;
    	cout << "NIM   : 2018 - 0801 - 381 \n" << endl;

	cout << "##############################################" << endl;	
	cout << "#                                            #" << endl;
    cout << "# PROGRAM ALGORITMA SELECTION SORT DANIELXYZ #" << endl;
	cout << "#                                            #" << endl;
	cout << "##############################################\n" << endl;

		cout << " $ Masukan Nilai data yang akan di sorting \n";
		cout << "----------------------------------------------\n";
	
	for(w=0; w<10; w++) {

		cout << "\n $ Input data ke " << w << " = ";
		cin >> x[w];
	
	}
		cout << "----------------------------------------------\n";
		cout << "\n $ Data sebelum di sort : " << endl;
		cout << "----------------------------------------------\n" << endl;

	for(w=0; w<10; w++){

		cout << setw(8) << x[w];
	
	}
	
	for(w=0; w<10-1; w++){

	y=w;

	for(z=w+1; z<10; z++){
	
		if(x[y]>x[z]){

			y=z;

		}
	}

	h=x[w];
	x[w]=x[y];
	x[y]=h;
	
	}
		cout << endl;
		cout << "----------------------------------------------\n";
		cout << "\n $ Data setelah di sort : " << endl;
		cout << "----------------------------------------------\n" << endl;

	for(w=0; w<10; w++){

		cout << setw(8) << x[w];
	}
	
	cout << endl;
	cout << "----------------------------------------------\n" << endl;
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
