#include <iostream>
#include <conio.h>
using namespace std;
int data[10],data2[10];
int n;
void tukar(int a,int b)
{
int t;
t = data[b];
data[b] = data[a];
data[a] = t;
}
void Input()
{
cout<<"Masukkan jumlah data = ";
cin>>n;
cout<<"��������"<<endl;
for(int i=0;i<n;i++)
{
cout<<"Masukkan data ke-"<<(i+1)<<" = ";
cin>>data[i]; data2[i] = data[i];
}
cout<<endl;
}
void Tampil()
{
for(int i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl;
}
void bubble_sort()
{
for(int i=1;i<n;i++)
{

for(int j=n-1;j>=i;j--){

if(data[j]<data[j-1]) tukar(j,j-1);
}
Tampil();
}
cout<<endl;
}
main()
{
cout<<"* Kelompok 5 *"<<endl;
cout<<"==15102043=="<<endl;
cout<<"==15102067=="<<endl;
cout<<"==15102080=="<<endl;
cout<<"*Fungsi Bubble Sort *"<<endl;
cout<<"*������������-*"<<endl;
Input();
cout<<"Proses Bubble Sort,,,,,,,"<<endl;
cout<<"������������-"<<endl;
Tampil();
bubble_sort();
cout<<"������������-"<<endl;
cout<<" TERIMA KASIH "<<endl;
cout<<"������������-"<<endl;
getch();





}
