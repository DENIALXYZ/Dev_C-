#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>	
#include <unistd.h> 
#include <dos.h>

using namespace std;

int main(){
	
	int konsonan;
	int vokal;
	int numerik;
	int a, i;
	int flag;
	char kalimat[50];
	char pencarian;

	cout << "Masukkan kalimat : ";
	cin.get(kalimat,50);

	cout<<"Huruf vokal : "<<kalimat[a]<<endl;
	
	for(int a=0;kalimat[a];a++){

		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){

		cout<<kalimat[a]<< " ";
	
		}
	}

	cout<<"\nJumlah konsonan : "<<konsonan<<"\n";

	for(int a=0;kalimat[a];a++){
		
		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){


		}

		else if (isdigit(kalimat[a])){

		}

		else if (isspace(kalimat[a])){

		}
		
		else{

		cout<<kalimat[a]<< " ";

		}

	}
	
	cout<<endl<<"Jumlah numerik : "<<numerik<<endl;

	for(int a=0;kalimat[a];a++){

		if (isdigit(kalimat[a])){

		cout<<kalimat[a]<< " ";

		}
	}

	cout << "Masukkan data yang dicari: ";
	cin >> pencarian;

		printf("Data %c ditemukan pada indeks ", pencarian);

	for(i=0;kalimat[i];i++){

		if(kalimat[i]==pencarian){

			flag=1;
			break;

		}
	}

		if (flag==1){

		printf("ke [%i], ", i);
		
		}

		else {

		printf("\nData tidak ditemukan");

		}

		getch();
		return 0;


}
