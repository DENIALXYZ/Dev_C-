#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

main(){
 int Nilai[20];
 int i, j, k, N;
 int temp;
 
 cout<<"Masukan banyak bilangan :";
 cin>>N;
 for(i=0; i<N; i++)
 {
  cout<<"Elemen ke -"<<i<<" : ";
  cin>>Nilai[i];
 }
 //proses cetak sebelum diurutkan
 cout<<"\n Data Sebelum di urut :";
 for(i=0; i<N; i++)
 cout<<setw(3)<<Nilai[i];
 //proses perurutan
 for(i=1; i<N; i++)
 {
  temp = Nilai[i];
  j=i-1;
  while((temp <= Nilai [j]) && (j>=1))
  {
   Nilai[j+1] = Nilai[j];
   j--;
  }
  if (temp >= Nilai[j])
  Nilai [j+1] = temp;
  
  else
  
  {
   Nilai[j+1]=Nilai[j];
   Nilai[j]= temp;
   
  }
  cout<<endl;
  for(k=0; k<N; k++)
  cout<<setw(3)<<Nilai[k];
 }
 //proses cetak setelah diurutkan
 cout<<"\n Data setelah di urut :";
 for(i=0; i<N; i++)
 cout<<setw(3)<<Nilai[i];
 getch();
}


