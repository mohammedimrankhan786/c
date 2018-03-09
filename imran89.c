
#include<stdio.h>
#include<conio.h>
void main()
{
int temp,i,j,a[20];
printf("enter the number");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
for(j=i+1;j<=5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=5;i++)
{
printf("%d",a[i]);
}
    getch();
}
