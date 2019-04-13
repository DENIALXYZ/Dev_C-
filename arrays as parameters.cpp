# include <iostream>

using namespace std;

void printfunc (int my_arg[], int i){

	for (int n = 0; n < 1; n++ )

		cout << my_arg[n] << '\n';
}

int main (){

	int my_array[] = {1,2,3,4,5};
	printfunc(my_array,5);
	
	return 0;
}
