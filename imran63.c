#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
  char a[100];
  int i,count=1;
  printf("Enter the string:");
  scanf("%s",&a);
  for(i=0;i!=strlen(a);i++)
  {
      if(a[i]==' ')
      {
      count=count+1;
      }
  }
  printf("The no of words:%d",count);
}
getch();
}
