#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) {
	int i,count=0;
	clrscr();
	char a[20];
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!= '\0';i++)
	{
	if(a[i]=='&' || a[i]=='*' || a[i]=='%' || a[i]=='@' || a[i]=='$' || a[i]=='#' || (a[i]>='0' && a[i]<='9'))
	{
	 count++;
	}
	}
	printf("%d",count);
	return 0;
}
{
	getch();
}
           
