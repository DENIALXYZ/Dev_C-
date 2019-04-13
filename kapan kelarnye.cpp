#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>	
#include <unistd.h> 
#include <dos.h>
#include <iomanip>
#include <time.h>
#include <stdio.h>
#define MAX_SIZE 5

using namespace std;

int main(){

	int coblos_nomor_berapa;
		
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%           Program Sorting Algorithm - DANIELXYZ               %" << endl;
		cout << "%---------------------------------------------------------------%" << endl;
		cout << "% [1] Bubble Sort                                               %" << endl;
		cout << "% [2] Selection Sort                                            %" << endl;
		cout << "% [3] Insertion Sort                                            %" << endl;
		cout << "% [4] Merge Sort                                                %" << endl;
		cout << "% [5] Quick Sort                                                %" << endl;
		cout << "%---------------------------------------------------------------%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;

		cout << "\n $ Silahkan Coblos Nomor Urut Pilihan Anda = "; 

		cin >> coblos_nomor_berapa;

		cout << endl;

	switch(coblos_nomor_berapa){
		
		case 1: {

		system("cls");
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

		}	break;

		case 2: {

		system("cls");
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

		}	break;

		case 3: {

		system("cls");
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
	int u, a, h; 
	int t; 
	int zulu;

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

		}	break;

		case 4: {
		
		system("cls");

	int half,humble,supreme;
 	void merge(int,int,int);
 	void merge_sort(int humble,int supreme);
 
	while(humble<supreme);

  		half=(humble+supreme)/2;
		merge_sort(humble,half);
  		merge_sort(half+1,supreme);
  		merge(humble,half,supreme);
  		

int a[100];
void merge(int humble,int half,int supreme);

	int d=humble, e=humble, c=half+1, k[50], y; 
 
	while((d<=half)&&(c<=supreme)){

  	if(a[d]<=a[c]){

   		k[e]=a[d]; d++;
  	}
  		else{
	
   			k[e]=a[c]; 
			c++;
  		
		} 

	e++;
 	}
 
	if(d>half){

  		for(y=c; y<=supreme; y++){
	
	   		k[e]=a[y]; 
			e++;
  		}
 	
	}
 		else{

  			for(y=d; y<=half; y++){
	
				k[e]=a[y]; 
				e++;
  			}
 		}
 
	for(y=humble; y<=supreme; y++)
  
		a[y]=k[y];


//int main(){

	int denial,xyz;
	
		cout << "Name  : DANIEL HUTAJULU" << endl;
    	cout << "NIM   : 2018 - 0801 - 381 \n" << endl;

	cout << "##########################################" << endl;	
	cout << "#                                        #" << endl;
    cout << "# PROGRAM ALGORITMA MERGE SORT DANIELXYZ #" << endl;
	cout << "#                                        #" << endl;
	cout << "##########################################\n" << endl;

		cout << " $ Masukan jumlah data array yang akan di sorting ~> "; 	
		cin >> denial;
   	
	cout << endl;
 	
	cout << " $ Silahkan masukan " << denial << " data array yang mao diurutkan :\n" << endl;
 
	for(xyz=1; xyz<=denial; xyz++){

  		cout << " Data Array ke-" << xyz << " = ";	
		cin >> a[xyz];
 
	}
 
	merge_sort(1,denial);
 
	cout << endl;
 
	cout << " $ Tampilan output program Merge Sorting : " << endl;
 
	cout << endl;
 
	for(xyz=1; xyz<=denial; xyz++)
  
		cout << " " << a[xyz];
 		cout << endl;

		}	break;

		default:
		
		system("cls");

			cout << "$ ERROR LAH PILIHAN NYA CUMA SEGITU !!! :) " << endl;
		break;
	}

	return 0;
}


