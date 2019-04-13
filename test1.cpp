#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
struct Tinggal
     {
           char Jalan[40];
           char Kota[15];
           char blok[5];
		   char propinsi[10];
     };

struct Lahir
     {
           int tanggal;
           int bulan;
           int tahun;
           float lahir;
     };

struct Mahasiswa
     {
           char Nim[9];

           char Nama[25];
           Tinggal Alamat;
           char Tgl_Lahir;
     };

int main()

{
    Mahasiswa Mhs;
     cout<<"Nama  Pandu Wira Buana "<<endl;
     cout<<"NIM   20180801325"<<endl;
     cout<<"Jurusan Teknik Informatika"<<endl;
     cout<<"Tugas online pertemuan ke 2 soal NO 2"<<endl;
     cout<<"========================================================================="<<endl;
     cout<<""<<endl;
     cout<<"Nama          : "; 
	 cin.getline(Mhs.Nama,25);
	 
	 cout<<"NIM           : "; 
	 cin.getline(Mhs.Nim,9);
     
	 cout<<"Alamat        :"<<endl;
     cout<<"\t Nama Jalan : "; 
	 cin.getline(Mhs.Alamat.Jalan,40);
     
	 cout<<"\t blok Rumah : "; 
	 cin.getline(Mhs.Alamat.blok,5);
    
	 cout<<"\t Kota        : "; 
	 cin.getline(Mhs.Alamat.Kota,15);
     cout<<"\t profinsi    : "; 
	 cin.getline(Mhs.Alamat.propinsi,10);
 
	 
	 cout<<"\t Tanggal     : ";
     cout<<"\t Bulan       : ";
     cout<<"\t Tahun       : ";
	
     
	 cout<<"\n\nData Diri\n\n";
     cout<<"NIM           : "<<Mhs.Nim;
     cout<<"\nNama        : "<<Mhs.Nama;
     cout<<"\nAlamat      : "<<"\n";
     cout<<"\n\tJalan     : "<<Mhs.Alamat.Jalan;
     cout<<"\n\tKota      : "<<Mhs.Alamat.Kota;
     cout<<"\n\ blok  : "<<Mhs.Alamat.blok;
     cout<<"\n\ propinsi  : "<<Mhs.Alamat.propinsi<<endl;
     cout<<"tanggal Lahir :"<<Mhs.Tgl_Lahir<<'tanggal';
 
     cout<<endl;
}
