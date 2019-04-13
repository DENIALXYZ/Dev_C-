#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <unistd.h> // untuk fungsi usleep	

/*
Jika dilihat pada source code di atas terdapat fungsi usleep. 
Fungsi Usleep ini menunda eksekusi panggilan selama mikrodetik. 
Sleep dapat diperpanjang sedikit oleh aktivitas sistem atau dengan waktu yang dihabiskan memproses panggilan.
*/

using namespace std;


const char rocket[] =
"           _\n\
         /^\\\n\
         |-|\n\
         | |\n\
         |L|\n\
         |A|\n\
         |P|\n\
         |A|\n\
         |N|\n\
        /| |\\\n\
       / | | \\\n\
      |  | |  |\n\
       `-\"\"\"-`\n\
";
 
int main()
{
    for (int i = 0; i < 50; i++) cout << endl; // melompat ke bawah konsol
    cout << rocket ;
    int j = 300000;
    for (int i = 0; i < 50; i++) {
        usleep(j); // bergerak lebih cepat,
        j = (int)(j * 0.9); // waktu sleep
        cout << endl; // memindahkan baris roket ke atas
    }
    cout << "Visit http://ifannuddin.com ! " << endl;
    return 0;
}
