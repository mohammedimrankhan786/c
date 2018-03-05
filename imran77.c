




#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int num,i,count=0;
  printf("Enter the number");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      printf("%d\n",i);
    }
  }
    
}
getch();
}
