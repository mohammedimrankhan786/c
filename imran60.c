




#include <stdio.h>
#include<conio.h>
int main() {
int n,i;
   clrscr();
scanf("%d",&n);
int a[n];
a[0]=1;
a[1]=1;
for(i=2;i<n;i++)
{
  a[i]=a[i-2]+a[i-1] ;
    
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
