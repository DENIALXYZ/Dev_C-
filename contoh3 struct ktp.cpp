#include <conio.h>
#include <iostream>
#include <stdio.h>


using namespace std;

char nik[55],berlaku[22];
char nama[45],ttg[54];
char jenis[33],gol[33];
char alamat[22],rt[23];
char rw[23],desa[43],kec[33];
char agama[33],status[33];
char pekerjaan[33];
char kewarga[33],kotabaru[22],nip[44],dinas[44];
char masa[33];
int main()
{
cout<<"Jenis Kelamin\t\t:"; cin>>(jenis);
cout<<"Gol.Darah\t\t:"; cin>>(gol);
cout<<"Berlaku Hingga\t\t:"; cin>>(masa);
cout<<"KOTABARU\t\t:"; gets(kotabaru);
cout<<"Agama\t\t\t:"; gets(agama);
cout<<"status Kawin\t\t:"; gets(status);
cout<<"Kewarga Negaraan \t:"; cin>>(kewarga);

cout<<"\t\t\t\tPROVINSI KALIMANTAN SELATAN\n";
cout<<"\t\t\t\t   KABUPATEN KOTABARU";
cout<<" \n\tNIK \t\t\t:" ; gets(nik);
cout<<"\tNama \t\t\t:"; gets(nama);
cout<<"\tTempat/Tanggal/Lahir\t:"; gets(ttg);
cout<<"\tJenis Kelamin \t\t:"<<jenis<<"\tGol.Darah :"<<gol;
fflush(stdin);
cout<<"\n\tAlamat\t\t\t:"; gets(alamat);;
fflush(stdin);
cout<<"\t\tRT/RW\t\t:"; gets(rt);
fflush(stdin);
cout<<"\t\tDesa/Kecamatan\t:"; gets(desa);
fflush(stdin);
cout<<"\t\tKec\t\t:"; gets(kec);
cout<<"\tAgama \t\t\t:"<<agama<<"\tStatus Kawin :"<<status;
fflush(stdin);
cout<<"\n\tPekerjaan\t\t:"; gets(pekerjaan);
cout<<"\tBerlaku Hingga \t\t:"<<masa<<"\t KOTABARU,"<<kotabaru<<"\n";
cout<<"\tKewarga Negaraan \t:"<<kewarga<<"\t\tKEPALA DINAS KEPENDUDUKAN";
cout<<"\n\t\t\t\t\t\t   DAN PENCATATAN SIPIL";
cout<<"\n\n\n";
cout<<" \t\t\t\t\t\t"; gets(dinas);
cout<<"____________________________________";
cout<<"\t\t________________________";
cout<<"\nTanda Tangan/Sidik Jari Pemegang KTP ";
cout<<"\t\tNIP."; gets (nip);

getch();
}
