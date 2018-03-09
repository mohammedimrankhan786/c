
#include<stdio.h>
#include<conio.h>
void main()
{
    int lcm,a,b,i,gcd;
    printf("enter the tow vlues:");
    scanf("%d%d",&a,&b);
    for (i=1;i<=a&&i<=b;i++)
    {
        if (a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("%d",lcm);
    
    }
getch();
}
