
#include<stdio.h>
#include<conio.h>
int main()
{
int kabali=0,ninja,diff;
printf("\nEnter the Number of Opponents :);
scanf("%d",&ninja);
for(i=0;i<ninja;i++)
{
kabali=kabali+i;
}
printf("%d",kabali);
diff=ninja-kabali;
if(diff>0)
{
printf("Kabali should not go for Fight");
}
else
{
printf("Kabali can go for Fight");
}
return 0;
} 
getch();
       }      
