
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i;
printf("Enter the N:");
scanf("%d",&n);
printf("\nEnter the N numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
continue;
}
else
{
printf("%d",i+1);
break;
}
}
}
getch();
}
