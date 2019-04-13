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

    string abc, xyz;
	int p = 0, q = 0, r = 0, s = 0;

	cout << "** ALGORITMA PENCARIAN DENGAN INPUTAN BERUPA KALIMAT/TEKS **\n" << endl;
    cout << "Silahkan masukan kalimatnya : "; 
		getline(cin,abc);
	cout << endl; 
    
	cout << "$ Output ~ " << endl;
	cout << endl;

    cout << "Data Huruf Vokal sebanyak ";

    for (int z=0; z<abc[z]; z++) { 
        p++;
    }       
	
	for (int x=0; x<p; x++) { 
        
		if (abc[x]=='a'||abc[x]=='i'||abc[x]=='u'||abc[x]=='e'||abc[x]=='o'||abc[x]=='A'||abc[x]=='I'||abc[x]=='U'||abc[x]=='E'||abc[x]=='O') {
           q++;
        }
  	}

    if (q>0) {
          
		cout << q << " digit"<< " = ";

       	for (int x=0; x<p; x++) {

		    if (abc[x]=='a'||abc[x]=='i'||abc[x]=='u'||abc[x]=='e'||abc[x]=='o'||abc[x]=='A'||abc[x]=='I'||abc[x]=='U'||abc[x]=='E'||abc[x]=='O') {
                
				cout << abc[x] <<" ";
            }
        }
    }
    
	else {
    	cout << "Tidak ada...";
    }

	cout << endl;
	
	cout << "Data Huruf Konsonan sebanyak ";
            
	for (int x=0; x<p; x++) {

    	if (abc[x]=='b'||abc[x]=='c'||abc[x]=='d'||abc[x]=='f'||abc[x]=='g'||abc[x]=='h'||
        	abc[x]=='j'||abc[x]=='k'||abc[x]=='l'||abc[x]=='m'||abc[x]=='n'||abc[x]=='p'||
            abc[x]=='q'||abc[x]=='r'||abc[x]=='s'||abc[x]=='t'||abc[x]=='v'||abc[x]=='w'||
            abc[x]=='x'||abc[x]=='y'||abc[x]=='z'||abc[x]=='B'||abc[x]=='C'||abc[x]=='D'||
            abc[x]=='F'||abc[x]=='x'||abc[x]=='H'||abc[x]=='J'||abc[x]=='K'||abc[x]=='L'||
            abc[x]=='M'||abc[x]=='N'||abc[x]=='P'||abc[x]=='Q'||abc[x]=='R'||abc[x]=='S'||
            abc[x]=='T'||abc[x]=='V'||abc[x]=='W'||abc[x]=='X'||abc[x]=='Y'||abc[x]=='Z') {
        r++;
        }
    }

		if (r>0) {
	
        cout << r << " digit"<<" = ";

            for (int x=0; x<p; x++) {
                    
				if (abc[x]=='b'||abc[x]=='c'||abc[x]=='d'||abc[x]=='f'||abc[x]=='g'||abc[x]=='h'||
                	abc[x]=='j'||abc[x]=='k'||abc[x]=='l'||abc[x]=='m'||abc[x]=='n'||abc[x]=='p'||
                	abc[x]=='q'||abc[x]=='r'||abc[x]=='s'||abc[x]=='t'||abc[x]=='v'||abc[x]=='w'||
                	abc[x]=='x'||abc[x]=='y'||abc[x]=='z'||abc[x]=='B'||abc[x]=='C'||abc[x]=='D'||
                	abc[x]=='F'||abc[x]=='x'||abc[x]=='H'||abc[x]=='J'||abc[x]=='K'||abc[x]=='L'||
                	abc[x]=='M'||abc[x]=='N'||abc[x]=='P'||abc[x]=='Q'||abc[x]=='R'||abc[x]=='S'||
                	abc[x]=='T'||abc[x]=='V'||abc[x]=='W'||abc[x]=='X'||abc[x]=='Y'||abc[x]=='Z') {
            
				cout << abc[x] << " ";
                
				}
           }

    	}
		
		else {
        
		cout << "Tak ada...";
    	}

	cout << endl;

	cout << "\n$ Masukkan data yang akan anda cari : ";
		cin >> xyz;

	cout << endl;

	cout << "Process pencarian data ~> " << xyz[0] << " ......." << "please wait. " << endl;

		for (int x=0; x<p; x++) {
	
            if (abc[x]==xyz[0]) {
               
				s++;
            }
        }

	cout << endl;

	if (s>0) {
	
        cout << "Data yang dicari sudah ditemukan, sebanyak " << s << " data";
    
	}
	
	else {

        cout << "Mohon maaf data yang diinput tidak ditemukan....!!! ";

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

