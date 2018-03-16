
#include<stdio.h>
#include<conio.h>
void main()
{
int a,rev=0,r;
printf("Enter the Number:");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
rev=rev*10+r;
a/=10;
}
printf("The reverse of the %d is %d",a,rev);
}
getch();
}
