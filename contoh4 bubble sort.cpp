#include<iostream>
using namespace std;

int main()
{   int i,a,c,d,g;
    a=5;
    int b[5];
            cout<<"Nama : Lukman Hakim"<<endl;
            cout<<"NIM  : 153040038"<<endl<<endl;

    cout<<"                               ***BUBBLE SORT*** "<<endl;
    cout<<"                   Mengurutkan nilai besar ke kecil"<<endl<<endl;
    for(i=0;i<a;i++)
    {
        cout<<"Masukkan nilai "<<i+1<<" : ";cin>>b[i];
    }
              
            for(i=0;i<a-1;i++)
    {
        for(d=i+1;d<a;d++)
                        {
                                    c=i;
                                 if(b[c]<b[d])
                                   {
                                         c=d;
                                    }
                                 g=b[c];
                                 b[c]=b[i];
                                  b[i]=g;
                      }
    }
                        cout<<"Data yang sudah diurutkan : ";

            for(i=0;i<a;i++)
    {
            cout<<b[i]<<" ";
            }
}
