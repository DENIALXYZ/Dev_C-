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

void merge(int,int,int);
void merge_sort(int humble,int supreme){
 
	int half;

	if(humble<supreme){

  		half=(humble+supreme)/2;
		merge_sort(humble,half);
  		merge_sort(half+1,supreme);
  		merge(humble,half,supreme);
  		
 	}
}

int a[100];
void merge(int humble,int half,int supreme){

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

}


int main(){

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
