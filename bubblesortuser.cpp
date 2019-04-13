#include<stdio.h>
#include<conio.h>

int main(void){
int bil[5]={5,3,2,1,4};
int j,i,temp;
for(i=0;i<5;i++)
scanf("%d",&bil[i]);
for(j=0;j<4;j++)
{for(i=0;i<4-j;i++)
{if(bil[i]>bil[i+1])
{temp=bil[i];
bil[i]=bil[i+1];
bil[i+1]=temp;
}
}
}
for(i=0;i<5;i++)
printf("%d ",bil[i]);
getch();
}
