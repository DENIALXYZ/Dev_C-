#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int cari,ketemu;
  int A[100]  ;

   cout<<"PROGRAM SEARCHING\n";
   cout<<"masukkan 7 buah data : \n\n";
   for (i=1;i<=7;i++)
   {
   cout<<"masukkan data ke-"<<i<<endl;
   cin>>A[i] ;
   }
   cout<<endl;
    cout<<"Input bilangan yang dicari : ";
    cin>>cari;

    ketemu=0;
    for(i=0;i<=7;i++)
    {
        if (A[i]==cari)
        {
            ketemu=1;
            cout<<"Data ditemukan pada indeks ke-"<<i;
        }
    }

    if (ketemu==0){
       cout<<"Data tidak ditemukan";
    }

 getch();
}
