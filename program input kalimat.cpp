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

int main()
{
    int vokal=0,konsonan=0,spasi=0,flag=0, i, j;
    char kalimat[100],cari;
    cout<<" >>Program untuk Mencari Data Berupa Huruf Pada Inputan yang Berupa Kalimat<<"<<endl;
    cout<<endl;
    cout <<" Masukan kalimat  = "; cin.getline(kalimat,100);
    i=strlen(kalimat);
    cout<<"\n Output : "<<endl;
    for(j=0;j<i;j++)
        {
            if(kalimat[j]=='a'||kalimat[j]=='i'||kalimat[j]=='u'||kalimat[j]=='e'||kalimat[j]=='o') {
                vokal++;
            }
            else if(kalimat[j]==' '){
                spasi++;
            }
            else
                konsonan++;
        }
    cout<<"  Vokal = "<<vokal<<" = ";

    for(j=0;j<i;j++){
    if(kalimat[j]=='a'||kalimat[j]=='i'||kalimat[j]=='u'||kalimat[j]=='e'||kalimat[j]=='o') {
                cout<<kalimat[j]<<" ";
            }
        }
    cout<<endl;
    cout<<"  Konsonan = "<<konsonan<<" = ";

    for(j=0;j<i;j++){
            if(kalimat[j]=='a'||kalimat[j]=='i'||kalimat[j]=='u'||kalimat[j]=='e'||kalimat[j]=='o'){
                cout<<"";
            }
            else if(kalimat[j]==' '){
                cout<<"";
            }
            else
                cout<<kalimat[j]<<" ";
        }

    cout<<endl;
    cout<<"\n Masukkan huruf yang akan anda cari: "; cin>>cari;
    for(j=0;j<i;j++){
            if(kalimat[j]==cari)
            flag=1;
        }

        if(flag==1){
                cout<<"  Huruf yang anda cari di temukan : "<<cari<<endl;
        }
        else{
                cout<<"  Huruf yang anda cari tidak ditemukan"<<endl;
            }

    return 0;
}
