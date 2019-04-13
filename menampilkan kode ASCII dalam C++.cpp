#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>	
#include <unistd.h> // untuk fungsi usleep
#include <dos.h>

using namespace std;

main (){

	int x;
	// clrscr();
	
	for(x = 1; x<=255; x++){
	cout << "%i = %c " << x,x;
	if (x % 10 == 0)	
	cout << "\n" << endl;
	}
	getch();

}
