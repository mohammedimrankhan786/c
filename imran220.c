
#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,fibo;
    scanf("%d",&n);
    printf("%d\n%d\n",f1,f2);
    int i;
    for(i=2;i<n;i++)
    {
        fibo=f1+f2;
        printf("%d\n",fibo);
        f1=f2;
        f2=fibo;
        }
        return 0;
}
