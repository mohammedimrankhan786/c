

#include <stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter the values: \n");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
if(a%2!=0)
{

    printf("%d \n",b);
}
a=a/10;
}
return 0;
}
getch();
}
 
