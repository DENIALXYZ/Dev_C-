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

	char s[] = "abcdefghijklmnopqrstuvwxyz";
	int chasc,i,cnt=0, konsonan=0;
	char ch,str[40]="";

	// clrscr();
	printf("** Program untuk mencari suatu data dan inputan berupa kalimat, menghitung konsonan, vokal, numerik pada C++ **\n\n");
	cout << "Input Kalimat : ";

	scanf("%[^\n]s",str);
	cout << endl;

	for(i=0;str[i]!='\0';i++){

		chasc = str[i];
		
		switch(chasc){

			case'a' :
			case'A' :
			case'e' :
			case'E' :
			case'i' :
			case'I' :
			case'o' :
			case'O' :
			case'u' :
			case'U' :

		cnt++;

			break;
			default:

		konsonan++;

			break;
		}
	}

	cout << " $ Output program yang di compile ~ \n" << endl;
	cout << "Jumlah huruf Vokal pada kalimat masukan = " << cnt << " yaitu " << setw(4) << cnt[0]<< endl; 
	// printf("\nJumlah Vokal %d", cnt," = ", cnt[s]);
	cout << "Jumlah huruf Konsonan pada kalimat masukan = " << konsonan << " yaitu " << setw(4) << konsonan [0]<< endl;
	// printf("\nJumlah Konsonan %d", konsonan," = ", konsonan[s] );
	
	getch();



}
