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

void data_meh(int array_batak[], int mrx){ 

	int xyz;
	
	for (xyz=1; xyz<=mrx; xyz++)
 
		cout << " " << array_batak[xyz] << setw(4);
}

int esgulian (int array_batak[], int alpha, int omega){

	int x, xyz=alpha, yogs=omega, big_bang;
	while(1){
   		
		while(array_batak[xyz]<array_batak[alpha])
   			
			xyz=xyz+1;
    
		while(array_batak[yogs]>array_batak[alpha])
     
			yogs=yogs-1;
    
			if (xyz<yogs){
	
   				big_bang=array_batak[xyz];
    
				array_batak[xyz]=array_batak[yogs];
   
				array_batak[yogs]=big_bang;
    		}
	   		
			else
      
			return yogs;
   }

}

void quick_sort(int array_batak[], int alpha, int omega){

	int barbar;
 	
	if(alpha<omega){
  		
		barbar=esgulian(array_batak,alpha,omega);
  		quick_sort(array_batak,alpha,barbar);
  		quick_sort(array_batak, barbar+1,omega);

 	}

}

int main(){

		cout << "Name  : DANIEL HUTAJULU" << endl;
    	cout << "NIM   : 2018 - 0801 - 381 \n" << endl;

	cout << "##########################################" << endl;	
	cout << "#                                        #" << endl;
    cout << "# PROGRAM ALGORITMA QUICK SORT DANIELXYZ #" << endl;
	cout << "#                                        #" << endl;
	cout << "##########################################\n" << endl;

	int xyz,yogs,mrx,array_batak[100];
		
		cout << " $ Silahkan input jumlah data = ";
		
			cin >> mrx;

		cout << endl;
   
	for(xyz=1; xyz<=mrx; xyz++){

    	cout << " Data ke-" << xyz << " = ";
			
			cin >> array_batak[xyz];
   }
	
	cout << endl;
	cout << " $ Data array sebelum diurut ~ \n" << endl;
 
	for(yogs=1; yogs<=mrx; yogs++){
  
		cout << " " << array_batak[yogs] << setw(4);
 	}
 
	quick_sort(array_batak,1,mrx);
 
	cout << "\n" << endl;
 
	cout << " $ Tampilan hasil output program Quick Sort ~" << "\n" << endl;
 
	data_meh(array_batak,mrx);

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
