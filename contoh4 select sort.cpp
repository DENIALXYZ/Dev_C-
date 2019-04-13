#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

main()
{
int x[5];
int i;
int temp;
int minindex;
int j;

cout<<" >> Welcome To The Program Selection Sort << \n" <<endl;
cout<<"masukkan nilai x :\n";
for(i=0; i<5; i++)
{
cout<<"x["<<i<<"] = ";cin>>x[i];
}
cout<<"\n data sebelum di sort :";
for(i=0; i<5;i++)
{
cout<<setw(4)<<x[i];
}
for(i=0; i<5-1; i++) //perulangan iterasi
{
minindex=i;
for(j=i+1; j<5; j++) //perulangan membandingkan data
{
if(x[minindex]>x[j])
{
minindex=j;
}
}
temp=x[i];
x[i]=x[minindex];
x[minindex]=temp;
}
cout<<"\n\nData setelah di sort :";
for(i=0; i<5; i++)
{
cout<<setw(4)<<x[i];
}
getch();
}
