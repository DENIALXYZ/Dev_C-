#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{

  int kode_brg;

  cout<<"Entrykan kode barangnya : ";
  cin>>kode_brg;

  if (kode_brg == 11){
     cout<<"Nama Barang : Sabun Mandi" <<endl;
     cout<<"Harga Barang: Rp. 2000";
  }
  else if (kode_brg == 12) {
     cout<<"Nama Barang : Pasta Gigi" <<endl;
     cout<<"Harga Barang: Rp. 2500";
  }
  else if (kode_brg == 13){
     cout<<"Nama Barang : Shampoo" <<endl;
     cout<<"Harga Barang: Rp. 4000";
  } 
  else {  
	cout<<"Nama Barang : Conditioner" <<endl;
    cout<<"Harga Barang: Rp. 3000";
  }
  getch();
}
