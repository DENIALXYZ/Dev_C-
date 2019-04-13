#include <stdio.h>
#include <conio.h>
#include <malloc.h>

using namespace std;

struct data{
int angka;
struct data *left, *right;
}*root = NULL;

void menu(void){
gotoxy(1,23); printf("+ to insert");
gotoxy(40,23); printf("- to seek and destroy");
gotoxy(1,24); printf("Esc to Exit");
}

void insert (struct data **p, int angka, int level){
level += 1;
if( level < 6){
if( (*p) == NULL ){
(*p) = (struct data *) malloc (sizeof (struct data) );
(*p) -> angka = angka;
(*p) -> left = (*p) -> right = NULL;
}
else if( angka < (*p)-> angka ){
insert(& (*p) -> left, angka, level);
}
else if( angka > (*p)-> angka ){
insert(& (*p) -> right, angka, level);
}
}
else{
textcolor(14);
gotoxy(1,25); cprintf("Level Tree telah mencapai Maksimum");
textcolor(7);
getch();
}
}

void clearall (struct data *p){
if(p==NULL) return;
clearall(p -> left);
clearall(p -> right);
free(p);
}

void cetak(struct data *p, int x, int y, int j){
if(p == NULL) return;
gotoxy(x,y);
printf("%d", p-> angka);

cetak(p -> left, x-j, y+2, j/2);
cetak(p -> right, x+j, y+2, j/2);
}

void preorder(struct data *p){
if(p==NULL) return;

printf("%d ", p->angka);
preorder(p -> left);
preorder(p -> right);
}

void inorder(struct data *p){
if(p==NULL) return;

inorder(p -> left);
printf("%d ", p->angka);
inorder(p -> right);
}

void postorder(struct data *p){
if(p==NULL) return;

postorder(p -> left);
postorder(p -> right);
printf("%d ", p->angka);
}

void print_order(void){
gotoxy(1,19); printf("PreOrder : "); preorder(root);
gotoxy(1,20); printf("InOrder : "); inorder(root);
gotoxy(1,21); printf("PostOrder : "); postorder(root);
}

void seekndestroy(struct data *p, int angka){
if( p == NULL) return;
else if( angka < p -> angka){
if( p -> left -> angka == angka){
clearall (p -> left);
p -> left = NULL;
}
else{
seekndestroy( p -> left, angka);
}
}
else if( angka > p -> angka){
if( p -> right -> angka == angka){
clearall (p -> right);
p -> right = NULL;
}
else{
seekndestroy( p -> right, angka);
}
}
}

void main(){
int tekan, angka;
do{
clrscr();
menu();
cetak(root, 40, 2, 20);
print_order();
tekan = getch();
switch(tekan){
case '+' : gotoxy(1,16); printf("Masukkan Angka : ");
scanf("%d",&angka);
insert(&root, angka,0);
break;

case '-' : gotoxy(1,16); printf("Masukkan Angka : ");
scanf("%d",&angka);
if(root == NULL){
textcolor(14);
gotoxy(1,25); cprintf("Tidak ada Data yang bisa dihapus");
textcolor(7);
getch();
}
else if(angka == root -> angka ){
textcolor(14);
gotoxy(1,25); cprintf("Root Tidak Boleh Dihapus");
textcolor(7);
getch();
}
else if(root !=NULL){
seekndestroy(root, angka);
}
break;
}
}while(tekan != 27);
clearall(root);
}
