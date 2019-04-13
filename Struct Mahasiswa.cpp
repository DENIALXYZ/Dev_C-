#include<iostream>
#include<conio.h>

using namespace std;

struct mahasiswa
{
	char NIM[15];
	char name[50];
	float ipk;
	int kt(){
		cout<<"\t KETERANGAN"<<endl;
	}
};

mahasiswa mhs;

int main(){
	mahasiswa mhs;
	cout<<"INPUTAN: "<<endl;
	cout<<"NIM: "<<endl;
	cin>>mhs.NIM;
	cout<<"nama: "<<endl;
	cin>>mhs.name;
	cout<<"IPK = "<<endl;
	cin>>mhs.ipk;
	cout<<"==================================="<<endl<<endl;
	mhs.kt();
	cout<<"\t ================================"<<endl;
	cout<<"\t NIM: "<<mhs.NIM<<endl;
	cout<<"\t nama: "<<mhs.name<<endl;
	cout<<"\t IPK = "<<mhs.ipk<<endl;
	
	getch();
}
