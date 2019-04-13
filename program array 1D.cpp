#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int a[5]={10,15,20,25,30};
	int b[5]={10,20};
	int c[5]={15,0,30};
	int d;

	cout<<endl;

	for (d=0;d<5;d++) {

		cout<<"A ["<<d<<"] = "<<a[d]<<" , B ["<<d<<"] = "<<b[d]<<" , C ["<<d<<"] = "<<c[d]<<endl;

	}		

getch();

}
