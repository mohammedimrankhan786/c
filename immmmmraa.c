#include <stdio.h>
#include<conio.h>

int main()
{
    char s[50];
    clrscr();
    int i,n;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",s);
    }
    return 0;
}
