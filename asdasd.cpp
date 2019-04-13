#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
 
int fib(int n)
{
int f;
if (n==0)f=0;
else if(n==1)f=1;
else f=fib(n-2)+fib(n-1);
return f;
 
}
 
int main(void)
{
int n;
 
printf("masukkan n: ");
scanf("%d",&n);
 
printf("bilangan fibonacci dari %d = %d",n,fib(n));
 
getch();
}
