#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[30],temp;
	for(i=1;i<=10;i++)
		clrscr();
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
}
		{
			getch();
		}
