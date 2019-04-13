#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>	
#include <unistd.h> 
#include <dos.h>
#include <iomanip>
#define maks 5

using  namespace std;

typedef struct
{
        //tugas yogi pratama
        int nik;
        char nama[31];
        int ttl;
        int alamat;
        char sex;
        char kerja[21];
        int terhapus;
        char agama[11];
        char statka[11];
        char warga[11];
}ktp_penduduk;
ktp_penduduk penduduk[maks];      
typedef struct
{
        char tempat[11];
        int tgl;
        int bulan;
        int tahun;
}pend_ttl;
pend_ttl ttl[maks];
typedef struct
{
        int rt_rw;
        char desa_kel[21];
        char kecamatan[21];
        char kota[21];
        int kodepos;
}pend_alamat;
pend_alamat alamat[maks];
        int main (int argc,char*argv[])
        {
            int y,g, cari, ketemu,pilih;
            char jawab;
            awal:
            system("cls");
            cout<<"------ MENU ------"<<endl;
            cout<<" 1 : memasukkan data "<<endl;
            cout<<" 2 : melihat data yang sudah dimasukkan "<<endl;
            cout<<" 3 : mencari data yang sudah dimasukkan "<<endl;
            cout<<" 4 : menghapus data yang sudah dimasukkan "<<endl;
            cout<<" 5 : memperbaiki data yang telah dimasukkan "<<endl;
            cout<<"masukkan pilihan anda = ";cin>>pilih;
            cout<<endl;
            
            switch(pilih)
            {
            case 1 :
            cout<<"berapa banyak data:";cin>>g;
            cout<<endl;
            //input data//
            cout<<"Masukan Data Warga"<<endl;
            cout<<"------------------"<<endl<<endl;
            for(y=0;y<g;y++)
            {
            cout<<"NIK : ";cin>>penduduk[y].nik;
            cout<<"Nama : ";fflush(stdin);cin.get(penduduk[y].nama,30);
            cout<<"ttl "<<endl;
            cout<<"tempat :";fflush(stdin);cin.get(ttl[y].tempat,10);
            cout<<"tanggal :";cin>>ttl[y].tgl;
            cout<<"bulan :";cin>>ttl[y].bulan;
            cout<<"tahun :";cin>>ttl[y].tahun;
            cout<<"Jenis Kelamin(p/w) : ";cin>>penduduk[y].sex;
            cout<<"Alamat  "<<endl;
            cout<<"RT/RW :";cin>>alamat[y].rt_rw;
            cout<<"Desa/kel :";fflush(stdin);cin.get(alamat[y].desa_kel,20);
            cout<<"Kecamatan :";fflush(stdin);cin.get(alamat[y].kecamatan,20);
            cout<<"kota :";fflush(stdin);cin.get(alamat[y].kota,20);
            cout<<"Kode pos :";cin>>alamat[y].kodepos;
            cout<<"agama :";fflush(stdin);cin.get(penduduk[y].agama,10);
            cout<<"status kawin(menikah/belum) :";fflush(stdin);cin.get(penduduk[y].statka,10);
            cout<<"Pekerjaan : ";fflush(stdin);cin.get(penduduk[y].kerja,21);
            cout<<"kewarganegaraan :";fflush(stdin);cin.get(penduduk[y].warga,10);
            cout<<"berlaku hingga : 15 - 01 - 2017"<<endl;
            penduduk[y].terhapus = 0;
            }
            break;
            /*----view data---*/
            case 2:
            cout<<endl;
            cout<<"Data Warga"<<endl;
            cout<<"----------"<<endl<<endl;
            for(y=0;y<g;y++)
            { 
            if (penduduk[y].terhapus == 0)
            cout<<"----------------------------------------------------|"<<endl;
            cout<<" nik       nama            ttl             sex      |"<<endl;
            cout<<"----------------------------------------------------|"<<endl;
            cout<<"                  tempat  tgl  bln  thn             |"<<endl;
            cout<<"----------------------------------------------------|"<<endl;
            cout<<setw(2)<<penduduk[y].nik<<setw(8)<<penduduk[y].nama<<setw(8)<<ttl[y].tempat<<setw(5)<<
            ttl[y].tgl<<setw(5)<<ttl[y].bulan<<setw(7)<<ttl[y].tahun<<setw(4)<<penduduk[y].sex<<endl;   
            cout<<"----------------------------------------------------|"<<endl<<endl;
                        
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<"                                     alamat                                 pekerjaan       agama        Status        warga   |"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<"    Rt/rw    Desa         kecamatan          kota            kode pos                                                          |"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<setw(6)<<alamat[y].rt_rw<<setw(11)<<
            alamat[y].desa_kel<<setw(20)<<alamat[y].kecamatan<<setw(15)<<
            alamat[y].kota<<setw(15)<<alamat[y].kodepos<<setw(18)<<penduduk[y].kerja<<setw(11)<<penduduk[y].agama<<setw(13)
            <<penduduk[y].statka<<setw(11)<<setw(15)<<penduduk[y].warga<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            }
            break;
            /*----search data---*/
            case 3: cout<<"Masukan NIK yang anda cari = ";cin>>cari; ketemu = 0;
            for(y=0;y<g;y++)
            {
            if (cari == penduduk[y].nik)
            ketemu = 1;
            }
            if (ketemu == 1)
            cout<<"NIK warga ditemukan :"<<endl;
            else
            cout<<"NIK warga tidak ada "<<endl;
            break;
            /*---menghapus data--*/
            case 4 : cout<<"Masukan NIK yang akan di hapus = "; cin>>cari;
            for(y=0;y<g;y++)
            { 
            if ((cari == penduduk[y].nik) && (penduduk[y].terhapus == 0))
            { 
            penduduk[y].terhapus = 1;
            }
            }
            cout<<"Data Warga yang Baru"<<endl;
            for(y=0;y<g;y++)
            { 
            if (penduduk[y].terhapus == 1)
            cout<<"NIK : ";cin>>penduduk[y].nik;
            cout<<"Nama : ";fflush(stdin);cin.get(penduduk[y].nama,30);
            cout<<"ttl "<<endl;
            cout<<"tempat :";fflush(stdin);cin.get(ttl[y].tempat,10);
            cout<<"tanggal :";cin>>ttl[y].tgl;
            cout<<"bulan :";cin>>ttl[y].bulan;
            cout<<"tahun :";cin>>ttl[y].tahun;
            cout<<"Jenis Kelamin(p/w) : ";cin>>penduduk[y].sex;
            cout<<"Alamat  "<<endl;
            cout<<"RT/RW :";cin>>alamat[y].rt_rw;
            cout<<"Desa/kel :";fflush(stdin);cin.get(alamat[y].desa_kel,20);
            cout<<"Kecamatan :";fflush(stdin);cin.get(alamat[y].kecamatan,20);
            cout<<"kota :";fflush(stdin);cin.get(alamat[y].kota,20);
            cout<<"Kode pos :";cin>>alamat[y].kodepos;
            cout<<"agama :";fflush(stdin);cin.get(penduduk[y].agama,10);
            cout<<"status kawin(menikah/belum) :";fflush(stdin);cin.get(penduduk[y].statka,10);
            cout<<"Pekerjaan : ";fflush(stdin);cin.get(penduduk[y].kerja,21);
            cout<<"kewarganegaraan :";fflush(stdin);cin.get(penduduk[y].warga,10);
            cout<<"berlaku hingga : 15 - 01 - 2017"<<endl;
            }
            break;

            /*---edit data---*/
            case 5: cout<<"Masukan NIK yang akan datanya akan diubah = ";cin>>cari;
            for(y=0;y<g;y++)
            {
            if (cari == penduduk[y].nik && (penduduk[y].terhapus == 0))
            { 
            cout<<"NIK : ";cin>>penduduk[y].nik;
            cout<<"Nama : ";fflush(stdin);cin.get(penduduk[y].nama,30);
            cout<<"ttl "<<endl;
            cout<<"tempat :";fflush(stdin);cin.get(ttl[y].tempat,10);
            cout<<"tanggal :";cin>>ttl[y].tgl;
            cout<<"bulan :";cin>>ttl[y].bulan;
            cout<<"tahun :";cin>>ttl[y].tahun;
            cout<<"Jenis Kelamin(p/w) : ";cin>>penduduk[y].sex;
            cout<<"Alamat  "<<endl;
            cout<<"RT/RW :";cin>>alamat[y].rt_rw;
            cout<<"Desa/kel :";fflush(stdin);cin.get(alamat[y].desa_kel,20);
            cout<<"Kecamatan :";fflush(stdin);cin.get(alamat[y].kecamatan,20);
            cout<<"kota :";fflush(stdin);cin.get(alamat[y].kota,20);
            cout<<"Kode pos :";cin>>alamat[y].kodepos;
            cout<<"agama :";fflush(stdin);cin.get(penduduk[y].agama,10);
            cout<<"status kawin(menikah/belum) :";fflush(stdin);cin.get(penduduk[y].statka,10);
            cout<<"Pekerjaan : ";fflush(stdin);cin.get(penduduk[y].kerja,21);
            cout<<"kewarganegaraan :";fflush(stdin);cin.get(penduduk[y].warga,10);
            cout<<"berlaku hingga : 15 - 01 - 2017"<<endl;
            penduduk[y].terhapus = 0;
            }
            }
            cout<<"Data Warga yang baru"<<endl;
            for(y=0;y<g;y++)
            {
            if ((penduduk[y].terhapus == 0))
            cout<<"----------------------------------------------------|"<<endl;
            cout<<" nik       nama            ttl             sex      |"<<endl;
            cout<<"----------------------------------------------------|"<<endl;
            cout<<"                  tempat  tgl  bln  thn             |"<<endl;
            cout<<"----------------------------------------------------|"<<endl;
            cout<<setw(2)<<penduduk[y].nik<<setw(8)<<penduduk[y].nama<<setw(8)<<ttl[y].tempat<<setw(5)<<
            ttl[y].tgl<<setw(5)<<ttl[y].bulan<<setw(7)<<ttl[y].tahun<<setw(4)<<penduduk[y].sex<<endl;   
            cout<<"----------------------------------------------------|"<<endl<<endl;
                        
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<"                                     alamat                                 pekerjaan       agama        Status        warga   |"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<"    Rt/rw    Desa         kecamatan          kota            kode pos                                                          |"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            cout<<setw(6)<<alamat[y].rt_rw<<setw(11)<<
            alamat[y].desa_kel<<setw(20)<<alamat[y].kecamatan<<setw(15)<<
            alamat[y].kota<<setw(15)<<alamat[y].kodepos<<setw(18)<<penduduk[y].kerja<<setw(11)<<penduduk[y].agama<<setw(13)
            <<penduduk[y].statka<<setw(11)<<setw(15)<<penduduk[y].warga<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            }
            break;
            default : printf("maaf anda salah pilih \n");
            }
            cout<<"mau proses lagi (Y/T) : ";cin>>jawab;
            if ((jawab=='Y')||(jawab=='y'))
            goto awal;
                        
            system ("PAUSE");
            return 0;
            }
            
