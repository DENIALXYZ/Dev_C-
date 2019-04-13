#include <iostream>

using namespace std;

int main()
{
	int pangkat[10], k;

	cout<<"Bilangan"<<setw(13)<<"Pangkat"<<endl;
	for (int i= 0; i< 10; i++)
	{
		k= i+1;
		pangkat[i]=k*k;
		cout<<setw(7)<<k<<setw(12)<<pangkat[i]<<endl;
		}
}

