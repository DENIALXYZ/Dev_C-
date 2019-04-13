#include <iostream>
#include <stdlib.h>
#include <dos.h>
#include <stdio.h>

using namespace std;

main() {
int N, i, x[20], y[20], ax[20], ay[20]; //x,y koordinat & ax,ay perubahan koordinat yg akan bernilai 1 dan -1 serta N banyaknya bola
// clrscr();
cout << "Masukan jumlah bola : "; 
cin >> N;
for( i=1; i<=N; i++){
x[i]=random(78)+1;
y[i]=random(22)+1;
ax[i]=random(2)*2-1; 
ay[i]=random(2)*2-1; 
}
do {
 //proses cetak N bola
for (i=1; i<=N; i++) {
textcolor(i);
gotoxy(x[i],y[i]); 
cprintf("O");
}
//timing bola akan bergerak atau hilang 
delay(100); 
 //proses bola akan dihapus
for(i=1; i<=N; i++) {
gotoxy( x[i],y[i]);
cprintf(" ");
//bertambah nilai koordinat x dan y 
 x[i]=x[i]+ax[i];
y[i]=y[i]+ay[i]; 
//nilai koordinat x dan y bertambah 1 atau berkurang -1
if(x[i]==1 || x[i]==79)
 ax[i]=-ax[i];
if(y[i]==1 || y[i]==23)
ay[i]=-ay[i];
}
}while(!kbhit()); 
 }
