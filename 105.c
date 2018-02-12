#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) {
	char a[1000];
   clrscr();
    int i,l=0,count=0;
    scanf("%s",a);
    l=strlen(a);
     for(i=0;i<l;i++)
{
if(a[i]>='0' && a[i]<='9')
count++;
}
printf("%d",count);
	return 0;
}
           
