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

int main (){

typedef struct{

    int tgl;

    int bln;

    int th;

} Tanggal;

typedef struct{

    char noID[5];

    char nama[30];

    char jenis_kelamin; //’L’ atau ‘P’

    Tanggal t;

} KTP;

typedef struct{

    KTP ktp;

    int jml;

} Data_KTP;

Data_KTP data_ktp;

Data_KTP *p;

}
