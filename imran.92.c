
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("Sum is:%d",sum);
}
getch();
}
